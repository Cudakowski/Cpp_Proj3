#ifndef CLASS_H
#define CLASS_H

#include <string>

class Class 
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
    virtual std::string getName()const=0;
    /**
     * @brief wirtualny destruktor
     * 
     * Defaultowy wirtualny destruktor, aby dekonstruowały się obiekty klasy pochodnej
     * 
     */
    virtual ~Class();
};

#endif
