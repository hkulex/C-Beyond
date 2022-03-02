#pragma once

#include "Npc.h"

class Elf : public Npc {
    protected:
        std::string name;
    
    public: 
        Elf(std::string name);

        void render();
};