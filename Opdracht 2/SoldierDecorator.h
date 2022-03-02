#pragma once

#include "Decorator.h"

class SoldierDecorator : public Decorator {
    public:
        SoldierDecorator(Npc* n);

        virtual void render();
};