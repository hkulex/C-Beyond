#pragma once

#include <iostream>
#include <string>


class Npc {
    protected:
        std::string name;
    
    public: 
        Npc();
        
        virtual void render();
};