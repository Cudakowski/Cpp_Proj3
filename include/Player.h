#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include "Faction.h"
#include "Class.h"
#include <string>
#include <memory>
#include <iostream>

class Player : public Entity
{
private:
    Faction _faction;
    int _health;
    int _mana;
    std::unique_ptr<Class> _class;
public:
    /**
     * @brief konstruktor obiektu Player
     * 
     * Konstruktor zapisuje podane dane i wywołuje konstruktor klasy nadrzędnej
     * przy zapisuwaniu uniqu_ptr wykonuje std::move
     * 
     * @param[in] name - nazwa gracza
     * @param[in] faction - frakcja gracza
     * @param[in] health - zdrowie gracza
     * @param[in] mana - mana gracza
     * @param[in] c - unique_ptr do klasy gracza
     */
    Player(std::string name,Faction faction,int health,int mana, std::unique_ptr<Class> c);
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
