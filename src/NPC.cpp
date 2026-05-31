#include "NPC.h"

NPC::NPC(std::string name,Faction faction,AI ai,int health,int mana, std::unique_ptr<Class> c):
    Entity(name), _faction{faction}, _ai{ai}, _health{health}, _mana{mana}, _class{std::move(c)}
{

}

void NPC::debugInfo() const
{
    std::cout<<"AI:\n"
    "\n"
    "    EntityID: " << entityId << "\n"
    "    Name: " << _name << "\n"
    "    Faction: " << getFactionName(_faction) << "\n"
    "    AI: " << getAIName(_ai) << "\n"
    "    Health: " << _health << "\n"
    "    Mana: " << _mana << "\n"
    "    Class: " << _class->getName() << "\n"
    "\n";
}
/*
AI:

    EntityID: 1
    Name: Milten 
    Faction: Old Camp
    AI: Neutral
    Health: 20
    Mana: 100
    Class: Mage

*/