#include "AlternativeStrategy.h"

void AlternativeStrategy::future(std::vector<std::vector<int>> &matrix) {
    int rows = matrix.size();
    int columns = matrix[0].size();
    int next[25][25]; 

    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            int alive = amountOfNeighbours(matrix, row, column);

            if (matrix.at(row).at(column) == 1) {
                if (alive < 2) {
                    next[row][column] = 0;
                } else if (alive == 2) {
                    next[row][column] = 1;
                } else if (alive > 7) {
                    next[row][column] = 0;
                } else {
                    next[row][column] = 1;
                }
            } else {
                if (alive == 3) {
                    next[row][column] = 1;
                } else {
                    next[row][column] = 0;
                }
            }
        }
    }

    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            matrix[row][column] = next[row][column];
        }
    }
}