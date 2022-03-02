#pragma once
#include <vector>

class Strategy {
    public:
        Strategy();
        ~Strategy();

        virtual void future(std::vector<std::vector<int>> &matrix) {};

    protected:
        int amountOfNeighbours(std::vector<std::vector<int>> &matrix, int r, int c);
};