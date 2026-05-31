#include "Player.h"

Player::Player(std::string name,Faction faction,int health,int mana, std::unique_ptr<Class> c):
    Entity(name), _faction{faction}, _health{health}, _mana{mana}, _class{std::move(c)}
{

}

void Player::debugInfo() const
{
    std::cout<<"Player:\n"
    "\n"
    "    EntityID: " << entityId << "\n"
    "    Name: " << _name << "\n"
    "    Faction: " << getFactionName(_faction) << "\n"
    "    Health: " << _health << "\n"
    "    Mana: " << _mana << "\n"
    "    Class: " << _class->getName() << "\n"
    "\n";
}
/*
Player:

    EntityID: 0
    Name: 
    Faction: New Camp
    Health: 100
    Mana: 20
    Class: Warrior

*/