#ifndef WORLD_H
#define WORLD_H

#include "Player.h"
#include "NPC.h"
#include "Tree.h"
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"
#include "Creature.h"
#include "Faction.h"
#include "AI.h"
#include <memory>
#include <vector>

class World 
{
private:
    std::vector<std::unique_ptr<Entity>> entities;
public:
    class iterator{
    private:
        std::vector<std::unique_ptr<Entity>>::const_iterator it;
    public:
        /**
         * @brief konstruktor iteratora klasy World
         * 
         * Konstrukktor inicjalizuje zapisany const_iterator wektora podaną wartością
         * 
         * @param[in] iter - const_iterator wektora do zapisania
         */
        iterator(std::vector<std::unique_ptr<Entity>>::const_iterator iter);
        /**
         * @brief operator lewostronnej inkrementacji
         * 
         * Operator inkrementuje zapisany iterator a potem zwraca referencję do samego siebie
         * 
         * @return iterator& - referencja do samego siebie
         */
        iterator& operator++();
        /**
         * @brief operator nierówności względem innego iteratora tej samej klasy
         * 
         * Operator porównuje dwa iteratory względem zapisanych w nich const_iteratorów wektora
         * 
         * @param[in] other - inny iterator klasy World do porównania
         * @return bool - wynik nierówności
         */
        bool operator!=(const iterator& other) const;
        /**
         * @brief operator dający dostęp bezpośrednio do obiektu Entity
         * 
         * Operator daje dostęp do obiektu entity schowanego pod unique_ptr w wektorze
         * 
         * @return Entity* - wskaźnik do Entity
         */
        Entity* operator->() const ;
    };

    /**
     * @brief dodaj byt
     * 
     * Funkcja dodaje byt do świata, wykonuje std::move
     * 
     * @param[in] entity - byt do dodania
     */
    void addEntity(std::unique_ptr<Entity> entity);
    /**
     * @brief pobierz iterator początku
     * 
     * Funckja zwracająca iterator klasy world wskazujący na początek wektora
     * 
     * @return iterator - iterator na początek wektora
     */
    iterator begin();
    /**
     * @brief pobierz iterator końca
     * 
     * Funckja zwracająca iterator klasy world wskazujący na koniec+1 wektora
     * 
     * @return iterator - iterator na koniec+1 wektora
     */
    iterator end();
    /**
     * @brief Wyczuść obiekty
     * 
     * Funkcja usuwa i zwalnia pamięć po obiektach zapisanych w klasie world
     * 
     * @return void - nic nie zwraca
     */
    void clear();
};

#endif
