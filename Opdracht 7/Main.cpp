#include <thread>

#include "Inventory.h"

int main() { 
    Inventory *inventory = new Inventory();

    std::vector<std::thread> threads;

    for (int i = 1; i <= 20; i++) {
        threads.push_back(std::thread(&Inventory::put, inventory, rand() % 100));
    }

    for (auto& thread : threads) {
        thread.join();
    }

    delete inventory;

    std::cin.get();

    return 0;
}