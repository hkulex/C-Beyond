#include "Orc.h"

Orc::Orc(std::string name) { 
    this->name = name;
}

void Orc::render() {
    std::cout << "Name: " << this->name;
}