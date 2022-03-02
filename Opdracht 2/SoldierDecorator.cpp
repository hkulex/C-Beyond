#include "SoldierDecorator.h"

SoldierDecorator::SoldierDecorator(Npc* n) : Decorator(n) {

}


void SoldierDecorator::render() {
    Decorator::render();

    std::cout << " with SoldierDecorator." << std::endl;
}