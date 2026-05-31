#ifndef WARRIOR_H
#define WARRIOR_H

#include "Class.h"

class Warrior : public Class
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
