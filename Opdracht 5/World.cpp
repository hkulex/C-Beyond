#include "World.h"

World::World() {
    setup();
}

World::~World() { 

}


void World::setup() {
    matrix.resize(ROWS, std::vector<int>(COLUMNS, 0));

    for (int row = 0; row < ROWS; row++) {
        for (int column = 0; column < COLUMNS; column++) {
            matrix.at(row).at(column) = (int)rand() % 5 == 0;
        }
    }
}


void World::display(Strategy *strategy) {
    std::string line = "";

    for (int row = 0; row < ROWS; row++) {
        for (int column = 0; column < COLUMNS; column++) {
            line += matrix[row][column] ? "O " : "  ";
        }

        line += "\n";
    }

    std::cout << line << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(250));

    system("cls");

    strategy->future(matrix);
}

bool World::alive() {
    for (int row = 0; row < ROWS; row++) {
        for (int column = 0; column < COLUMNS; column++) {
            if (matrix[row][column] == 1) {
                return true;
            }
        }
    }

    return false;
}