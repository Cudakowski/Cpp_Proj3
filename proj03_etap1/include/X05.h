#ifndef X05_H
#define X05_H

#include "X07.h"
#include "X03.h"

class X05 :  public X07,  public  X03
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
    X05();
    /**
     * @brief konstruktor z argumentem
     * 
     * Konstruktor tworzy nowy obiekt klasy
     * Wywołuje konstryktor/konstruktory klas po których dziedziczy z argumentem
     * przypisuje do zapisanej zmiennej wartość podaną
     * 
     * @param[in] val - wartość podana do zapisania
     */
    X05(int val);
    /**
     * @brief wypisz treść
     * 
     * Funkcja wypisuje to co klasy po których dziedziczy i otula tę treść znakami '*'
     * 
     * @return void - nic nie zwraca
     */
    void Write();
};

#endif
