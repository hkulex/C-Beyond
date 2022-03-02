#pragma once

#include "Decorator.h"

class FarmerDecorator : public Decorator {
    public:
        FarmerDecorator(Npc* n);

        void render();
};