#pragma once

#include "Npc.h"

class Orc : public Npc {
    protected:
        std::string name;
    
    public: 
        Orc(std::string name);

        void render();
};