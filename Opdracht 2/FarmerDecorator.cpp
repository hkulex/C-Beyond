#include "FarmerDecorator.h"

FarmerDecorator::FarmerDecorator(Npc* n) : Decorator(n) {

}


void FarmerDecorator::render() {
    Decorator::render();

    std::cout << " with FarmerDecorator." << std::endl;
}