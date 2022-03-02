#pragma once

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

#include "Strategy.h"

class World {
    public:
        World();
        ~World();

        void display(Strategy *strategy);
        bool alive();

    protected:

    private:
        const int ROWS = 25;
        const int COLUMNS = 25;
        
        std::vector<std::vector<int>> matrix;

        void setup();
};