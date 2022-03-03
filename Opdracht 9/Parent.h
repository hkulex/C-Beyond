#pragma once
#define MOVESEMANTICS

#include <string>
#include <ostream>
#include "Child.h"

class Parent {
    public:
        Parent(std::string name); // con
        Parent(const Parent& other); //copy con
        virtual ~Parent(); // decon
        Parent& operator=(const Parent& other); // assign op

#ifdef MOVESEMANTICS
        Parent(Parent&& other) noexcept;// move con
        Parent& operator=(Parent&& other) noexcept; // move assign op
#endif        

        friend std::ostream& operator<<(std::ostream& os, const Parent& parent);

    private:
        std::string name;
        Child* child;
};

