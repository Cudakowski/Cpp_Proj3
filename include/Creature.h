#ifndef CREATURE_H
#define CREATURE_H

#include "Class.h"

class Creature  : public Class
{
private:

public:
    /**
     * @brief wydobądź nazwę klasy
     * 
     * Funkcja zwraca nazwę klasy
     * 
     * @return std::string - nazwa klasy
     */
    std::string getName()const override;
};

#endif
