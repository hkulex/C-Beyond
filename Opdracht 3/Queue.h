#pragma once

#include <vector>

template <typename T>

class Queue {
    public:
        // Add item to end of vector
        void put(T item) {
            items.push_back(item);
        }

        // Get item at beginning of vector
        T get(T item) {
            return items.front();
        }

        // Get size of vector
        int size() {
            return items.size();
        }

    private:
        std::vector<T> items;
};