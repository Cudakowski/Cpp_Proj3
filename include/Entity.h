#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity 
{
protected:
    size_t entityId;
    static size_t entityIdIncrement;
    std::string _name;
public:
    /**
     * @brief kostruktor obiektu Entity
     * 
     * Konstruktor przypisuje podaną nazwę obiektowi
     * oraz przypisuje mu jego ID za pmocą zmiennej statycznej tej klasy,
     * która inkrementuje się wraz z każdym Utworzeniem obiektu pochodnego od entity
     * 
     * @param[in] name - nazwa entity do przypisania
     */
    Entity(std::string name);
    /**
     * @brief wypisz dane obiektu
     * 
     * Funkcja wypisująca dane obiektu
     * 
     * @return void - nic nie zwraca
     */
    virtual void debugInfo() const = 0;
    /**
     * @brief wirtualny destruktor
     * 
     * Defaultowy wirtualny destruktor, aby dekonstruowały się obiekty klasy pochodnej
     * 
     */
    virtual ~Entity();
};

#endif
