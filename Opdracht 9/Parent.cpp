#include <iostream>
#include "Parent.h"

Parent::Parent(std::string name) {
    this->name = name;
    std::string childName = "ChildOf" + name;
    this->child = new Child(childName);
}

Parent::Parent(const Parent& other) {
    std::cout << "Parent cctor" << std::endl;
    this->name = other.name;
    this->child = new Child(*other.child);
}

Parent::~Parent() {
    std::cout << "Parent dtor : " << this->name << std::endl;
    delete this->child;
}

Parent& Parent::operator=(const Parent& other) {
    std::cout << "Parent assignment" << std::endl;

    if (this == &other) return *this;

    this->name = other.name;
    delete this->child;
    this->child = new Child(*other.child);

    return *this;
}


// move con
Parent::Parent(Parent&& other) noexcept {
    std::cout << "PARENT MOVE CONSTRUCTOR" << std::endl;
    
    name = std::move(other.name);
    child = other.child;

    other.name = "";
    other.child = nullptr;
}


// move assignemnt operator
Parent& Parent::operator=(Parent&& other) noexcept {
    std::cout << "PARENT MOVE ASSIGNMENT OPERATOR" << std::endl;

    if (this == &other) {
        return *this;
    }

    delete child;

    name = std::move(other.name);
    child = other.child;

    other.name = "";
    other.child = nullptr;

    return *this;
}






std::ostream& operator<<(std::ostream& os, const Parent& parent) {
    os << "parent name: " << parent.name << "," << *parent.child;
    return os;
}