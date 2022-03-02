#include "Strategy.h"

Strategy::Strategy() {

}


Strategy::~Strategy() {

}

int Strategy::amountOfNeighbours(std::vector<std::vector<int>> &matrix, int r, int c) {
    int neighbours = 0;

    for (int row = -1; row <= 1; row++) {
        for (int column = -1; column <= 1; column++) {
            if (row == 0 && column == 0) {
                continue;
            }

            try {
                if (matrix.at(r + row).at(c + column) == 1) {
                    neighbours++;
                }
            } catch (const std::exception& e) {
                
            }
        }
    }

    return neighbours;
}