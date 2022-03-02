#include "ShamanDecorator.h"

ShamanDecorator::ShamanDecorator(Npc* n) : Decorator(n) {

}

void ShamanDecorator::render() {
    Decorator::render();

    std::cout << " with ShamanDecorator." << std::endl;
}