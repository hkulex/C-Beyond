#include "Inventory.h"

void Inventory::get(int item) {
    std::cout << "Get item: " << item << std::endl;
    std::lock_guard<std::mutex> guard(mtx);
    
    items.erase(std::remove(items.begin(), items.end(), item), items.end());

    show();
}

void Inventory::put(int item) {
    std::lock_guard<std::mutex> lock(mtx);
    
    std::cout << "Put item: " << item << std::endl;
    items.push_back(item);

    show();
}


void Inventory::show() {
    std::cout << "Inventory contents: ";

    for (int i : items) {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}