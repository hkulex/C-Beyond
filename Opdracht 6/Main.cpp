#include <queue>
#include <thread>
#include <iostream>
#include <mutex>
#include <condition_variable>

int counter = 0;
bool done = false;

std::mutex mx;
std::condition_variable cv;
std::queue<int> goods;

void producer() {
    std::cout << "Starting producer..." << std::endl;
    std::unique_lock<std::mutex> lock(mx);

    for (int i = 0; i < 500; ++i) {
        goods.push(i);
        counter++;
    }

    done = true;

    cv.notify_one();

    std::cout << "Finished producer..." << std::endl;
}

void consumer() {
    std::cout << "Starting consumer..." << std::endl;
    std::unique_lock<std::mutex> lock(mx);

    if (!done) {
        cv.wait(lock);
    }

    while (!goods.empty()) {
        goods.pop();
        counter--;
    }

    std::cout << "Finished consumer..." << std::endl;
}

int main() {
    counter = 0;
    std::thread producerThread(producer);
    std::thread consumerThread(consumer);

    producerThread.join();
    consumerThread.join();

    std::cout << "Net: " << counter << " " << goods.size() << std::endl;
}