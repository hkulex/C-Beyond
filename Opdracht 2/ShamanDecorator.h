#pragma once

#include "Decorator.h"

class ShamanDecorator : public Decorator {
    public:
        ShamanDecorator(Npc* n);

        void render();
};