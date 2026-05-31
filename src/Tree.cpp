#include "Tree.h"

Tree::Tree(std::string name):
    Entity(name)
{

}

void Tree::debugInfo() const 
{
    std::cout<<"Tree:\n"
    "\n"
    "    EntityID: " << entityId << "\n"
    "    Name: " << _name << "\n"
    "\n";
}

/*
Tree:

    EntityID: 4
    Name: Dąb Bartek

*/