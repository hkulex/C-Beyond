#pragma once

#include "Npc.h"

class Decorator : public Npc {
    private:
        Npc* npc;
    public:
        Decorator(Npc* n);
        virtual ~Decorator();

        virtual void render();
};