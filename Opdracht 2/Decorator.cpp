#include "Decorator.h"

Decorator::Decorator(Npc* n) {
    npc = n;
}

void Decorator::render() {
    npc->render();
}

Decorator::~Decorator() {
    if (npc) {
        delete npc;
    }
}