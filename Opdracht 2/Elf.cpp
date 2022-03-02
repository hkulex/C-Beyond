#include "Elf.h"

Elf::Elf(std::string name) { 
    this->name = name;
}


void Elf::render() {
    std::cout << "Name: " << this->name;
}