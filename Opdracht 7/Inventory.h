#pragma once

#include <vector>
#include <mutex>
#include <algorithm>
#include <iostream>

class Inventory {
    public: 
        Inventory() {};
        ~Inventory() {};
        
        void put(int item);
        void get(int item);

    protected:

    private:
        std::vector<int> items;
        std::mutex mtx;

        void show();
};