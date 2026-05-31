#ifndef MAGE_H
#define MAGE_H

#include "Class.h"

class Mage  : public Class
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
