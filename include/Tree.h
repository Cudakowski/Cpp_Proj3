#ifndef TREE_H
#define TREE_H

#include "Entity.h"
#include <string>
#include <iostream>

class Tree : public Entity
{
private:

public:
    /**
     * @brief konstruktor klasy Tree
     * 
     * Konstruktor zapisuje podane dane i wywołuje konstruktor klasy nadrzędnej
     * 
     * @param[in] name - nazwa drzewa
     */
    Tree(std::string name);
    /**
     * @brief wypisz dane obiektu
     * 
     * Funkcja wypisująca dane obiektu
     * 
     * @return void - nic nie zwraca
     */
    void debugInfo() const override;
};

#endif
