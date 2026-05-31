#ifndef X04_H
#define X04_H

#include <iostream>

class X04 
{
protected:
    int v;
public:
    /**
     * @brief konstruktor bezargumentowy
     * 
     * Konstruktor tworzy nowy obiekt klasy
     * przypisuje do zapisanej zmiennej wartość 1
     * 
     */
    X04();
    /**
     * @brief konstruktor z argumentem
     * 
     * Konstruktor tworzy nowy obiekt klasy
     * przypisuje do zapisanej zmiennej wartość podaną
     * 
     * @param[in] val - wartość podana do zapisania
     */
    X04(int val);
    /**
     * @brief wypisz treść
     * 
     * Funkcja wypisuje zapisaną wartość i otula ją znakami '!'
     * 
     * @return void - nic nie zwraca
     */
    virtual void Write();
};

#endif
