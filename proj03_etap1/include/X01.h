#ifndef X01_H
#define X01_H

#include "X07.h"

class X01 : public X07
{
private:

public:
    /**
     * @brief konstruktor bezargumentowy
     * 
     * Konstruktor tworzy nowy obiekt klasy
     * Wywołuje konstryktor/konstruktory klas po których dziedziczy bez argumentu
     * przypisuje do zapisanej zmiennej wartość 1
     * 
     */
    X01();
    /**
     * @brief konstruktor z argumentem
     * 
     * Konstruktor tworzy nowy obiekt klasy
     * Wywołuje konstryktor/konstruktory klas po których dziedziczy z argumentem
     * przypisuje do zapisanej zmiennej wartość podaną
     * 
     * @param[in] val - wartość podana do zapisania
     */
    X01(int val);
    /**
     * @brief wypisz treść
     * 
     * Funkcja wypisuje to co klasy po których dziedziczy i otula tę treść znakami '&'
     * 
     * @return void - nic nie zwraca
     */
    void Write();
};

#endif
