#ifndef MENUUZYTKOWNIKA_H
#define MENUUZYTKOWNIKA_H

#include <iostream>
#include <windows.h>

#include "MetodyPomocnicze.h"
#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class MenuUzytkownika{
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    int idZalogowanegoUzytkownika;
    string nazwaPlikuZUzytkownikami = "Uzytkownicy.txt";


public:

    int menuUzytkownika(vector <Uzytkownik> &uzytkownicy, int idZalogowanegoUzytkownika);
    char wybierzOpcjeZMenuUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika(vector <Uzytkownik> &uzytkownicy, int idZalogowanegoUzytkownika);


    /*int dodajAdresata();
    wyszukajAdresatowPoNazwisku
    wyswietlWszystkichAdresatow
    usunAdresata
    podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata
    edytujAdresata
    zmianaHaslaZalogowanegoUzytkownika*/
};

#endif
