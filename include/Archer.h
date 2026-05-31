#ifndef ARCHER_H
#define ARCHER_H

#include "Class.h"

class Archer  : public Class
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
