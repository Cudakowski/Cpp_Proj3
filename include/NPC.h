#ifndef NPC_H
#define NPC_H

#include "Entity.h"
#include "Faction.h"
#include "Class.h"
#include "AI.h"
#include <string>
#include <memory>
#include <iostream>

class NPC : public Entity
{
private:
    Faction _faction;
    AI _ai;
    int _health;
    int _mana;
    std::unique_ptr<Class> _class;
public:
    /**
     * @brief Konstruktor obiektu NPC
     * 
     * Konstruktor zapisuje podane dane i wywołuje konstruktor klasy nadrzędnej
     * przy zapisuwaniu uniqu_ptr wykonuje std::move
     * 
     * @param[in] name - nazwa NPC'ta
     * @param[in] faction - frakcja NPC'ta
     * @param[in] ai - AI NPC'ta
     * @param[in] health - zdrowie NPC'ta
     * @param[in] mana - mana NPC'ta
     * @param[in] c - unique_ptr do klasy NPC'ta
     */
    NPC(std::string name,Faction faction,AI ai,int health,int mana, std::unique_ptr<Class> c);
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
