// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku main.cpp
//
// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Zaimplementuj odpowiednio klasy niezbedne do dzialania programu odtwarzajac hierarchie dziedziczenia, w tym dziedziczenia wielokrotnego i wirtualnego.
// Wszystkie rekonstruowane klasy musza tworzyc jedno drzewo dziedziczenia - kazda klasa musi dziedziczyc 
// z jakiejs innej przynajmniej jednej klasy za wyjatkiem klasy (klas) znajdujacej sie na samej górze hierarchii dziedziczenia.
// Kod kazdej z definiowanych metod Write moze zawierac dowolną ilosc instrukcji
// wypisujacych na standardowe wyjscie, przy czym kazda z tych instrukcji musi wypisywac 
// albo jedną z liczb podstawionych pod zmienna w main-ie 
// albo tylko jeden z następujących znaków: !, @, $, &, ?, *, =, +, ~, ^, -, >, <, #, %
// Jesli chcesz, by dana metoda Write powinna wypisywała na wyjsciu rózne znaki, korzystaj z
// wywołan metod Write klasy bazowej (klas bazowych) np.:
//
//void X99::Write()
//{
//    ...
//
//    cout << '@';    // wypisujemy znak @
//
//    ...
//
//    <nazwa_klasy_bazowej 1>::Write();    
//    <nazwa_klasy_bazowej 2>::Write();    
//
//    ...
//
//    char cDecor = '@';    // wypisujemy znak @ (ten sam co wyzej)
//
//    ...
//
//    for (int i=0; i<=2; i++)
//        cout << cDecor;    // wypisujemy znak @ (ten sam co wyzej)
//
//
//    ...
//
//    // cout << '%';    // ZLE !!! Probujemy wypisac inny znak niz wczesniej wypisywany.
//
//}
//
// Uwaga: nie należy powielać kodu z klasy bazowej w klasach pochodnych, tylko wykorzystać pracę wykonywaną przez metody klasy bazowej 
// w metodach klas pochodnych (także w odniesieniu do konstruktorów).
// Generalnie należy unikać duplikacji jakiegokolwiek kodu.
// Poziomy dostepu do skladnikow klas powinny byc dobrane zgodnie z zasadami programowania obiektowego (hermetyzacja/ekapsulacja)  
// Staraj się nie powielać tego samego kodu w różnych miejscach. 
// Kazda klasa powinna byc zdefiniowana w oddzielnym pliku h (deklaracje funkcji, klas i metod, ewentualnie takze definicje jesli klasa szablonowa) i cpp (definicje).
//
//
// Pliku main.cpp, nie wolno modyfikowac.
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem projNN_etapM/ (gdzie NN to nr projektu a M to etap np. proj01_etap2)
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf proj01_etap2.tar.gz proj01_etap2/
// * rozpakowanie archiwum: tar -xvf nazwa.tar.gz
//
// * wszystkie funkcje w plikach *.h powinny być okomentowane zgodnie z wczesniej ustalonym wzorem (format pod Doxygena) np.:
// /** @brief Wyszukanie elementu w liscie.
// *
// * Funkcja przeszukuje liste w celu znalezienia podanego elementu.
// *
// * @param[in] list  wskaznik do listy
// * @param[in] c  wartosc szukanego elementu 
// * @return wskaznik do pierwszego elementu listy o wartosci c jesli taki element jest w liscie \n
// * NULL jesli lista nie posiada elementu o wartosci c
// */
// slistEl * find(slist * list, char c);
//
// * do szybkiej weryfikacji poprawnosci wyjscia mozna uzyc diff-a (np.: diff -B plik_z_outputem_z_main plik_z_outputem_z_programu > wyniki_porownania.out)



#include <iostream>
using namespace std;

#include "X01.h"
#include "X02.h"
#include "X03.h"
#include "X04.h"
#include "X05.h"
#include "X06.h"
#include "X07.h"

/*

                            X04 !1!
X04 -> X07 $$$!1!$$$                    X04 -> X03 @@@!6!@@@
X07 -> X01 &&&$$$!2!$$$&&&              X03 -> X02 ???@@@!5!@@@???

X07 && X03 -> X05 ***$$$!3!$$$@@@!3!@@@***

X01 && X05 && X02 -> X06 ===&&&$$$!7!$$$&&&***$$$!7!$$$@@@!7!@@@***???@@@!7!@@@???===

*/


int main()
{
    // ==========================================
    // ETAP 1
    // ==========================================
    int nNo;
    nNo = 1; 
	X07 Y01(nNo);   //$$$!1!$$$
    
	nNo = 2; 
	X01 Y02(nNo);   //&&&$$$!2!$$$&&&
    
	nNo = 3; 
	X05 Y03(nNo);   //***$$$!3!$$$@@@!3!@@@***
    
	X04 Y04;        //!1!
    
	nNo = 5; 
	X02 Y05(nNo);   //???@@@!5!@@@???
    
	nNo = 6; 
	X03 Y06(nNo);   //@@@!6!@@@
    
	nNo = 7; 
	X06 Y07(nNo);   //===&&&$$$!7!$$$&&&***$$$!7!$$$@@@!7!@@@***???@@@!7!@@@???===
    
    
    X02& Y08 = Y05;
    X07* pY09 = new X07;
	X05& Y10 = Y07;
    
    
    X04* apY11[10];
    apY11[0] = &Y01; 
	apY11[1] = &Y02;
    apY11[2] = (X07*)(&Y03); 
	apY11[3] = &Y04;
    apY11[4] = (X01*)(&Y05); 
	apY11[5] = &Y06;
    apY11[6] = (X02*)(&Y07); 
	apY11[7] = &Y08;
    apY11[8] = pY09; 
	apY11[9] = (X07*)(&Y10);
        
    X05 Y12 = Y07; 
	X05 Y13 = (X05)Y07;
    X03 Y14 = Y05; 
	X01 Y15 = (X06)Y07;    
    
    Y05.Write();   cout << endl;        //???@@@!5!@@@???
    Y14.Write();   cout << endl;        //@@@!5!@@@
    apY11[4]->Write();   cout << endl;  //???@@@!5!@@@???
    Y01.Write();   cout << endl;        //$$$!1!$$$
    apY11[7]->Write();   cout << endl;  //???@@@!5!@@@???
    pY09->Write();   cout << endl;      //$$$!1!$$$
    Y06.Write();   cout << endl;        //@@@!6!@@@
    apY11[8]->Write();   cout << endl;  //$$$!1!$$$
    Y03.Write();   cout << endl;        //***$$$!3!$$$@@@!3!@@@***
    Y10.Write();   cout << endl;        //===&&&$$$!7!$$$&&&***$$$!7!$$$@@@!7!@@@***???@@@!7!@@@???===
    Y04.Write();   cout << endl;        //!1!
    Y13.Write();   cout << endl;        //***$$$!7!$$$@@@!7!@@@***
    Y15.Write();   cout << endl;        //&&&$$$!7!$$$&&&
    Y02.Write();   cout << endl;        //&&&$$$!2!$$$&&&
    Y08.Write();   cout << endl;        //???@@@!5!@@@???
    apY11[1]->Write();   cout << endl;  //&&&$$$!2!$$$&&&
    Y12.Write();   cout << endl;        //***$$$!7!$$$@@@!7!@@@***
    Y07.Write();   cout << endl;        //===&&&$$$!7!$$$&&&***$$$!7!$$$@@@!7!@@@***???@@@!7!@@@???===
    
    
    delete pY09;
 
 
    return 0;
}


/** Wynik dzialania programu:
???@@@!5!@@@???
@@@!5!@@@
???@@@!5!@@@???
$$$!1!$$$
???@@@!5!@@@???
$$$!1!$$$
@@@!6!@@@
$$$!1!$$$
***$$$!3!$$$@@@!3!@@@***
===&&&$$$!7!$$$&&&***$$$!7!$$$@@@!7!@@@***???@@@!7!@@@???===
!1!
***$$$!7!$$$@@@!7!@@@***
&&&$$$!7!$$$&&&
&&&$$$!2!$$$&&&
???@@@!5!@@@???
&&&$$$!2!$$$&&&
***$$$!7!$$$@@@!7!@@@***
===&&&$$$!7!$$$&&&***$$$!7!$$$@@@!7!@@@***???@@@!7!@@@???===
*/