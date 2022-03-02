#include <iostream>
#include "Queue.h"


template<typename T>
void sort(T a[], int length) {
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (a[i] > a[j])
            {
                T item;
                item = a[i];
                a[i] = a[j];
                a[j] = item;
            }
        }
    }
}



int main() {
    Queue<int> queue;

    queue.put(1);
    queue.put(2);
    queue.put(3);

    std::cout << queue.size() << std::endl;


    std::string sequence[5] = { "phone", "guitar", "beer", "ape", "cold" };
    //int sequence[5] = { 5, 2, 3, 8, 1 };
    
    sort(sequence, 5);

    for (int i = 0; i < 5; i++) { 
        std::cout << sequence[i] << std::endl;
    }

    system("PAUSE");

    return 0;
}