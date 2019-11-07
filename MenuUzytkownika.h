#ifndef MENUUZYTKOWNIKA_H
#define MENUUZYTKOWNIKA_H

#include <iostream>
#include <windows.h>

#include "MetodyPomocnicze.h"

using namespace std;

class MenuUzytkownika{
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

public:

    int menuUzytkownika();
    char wybierzOpcjeZMenuUzytkownika();
    /*int dodajAdresata();
    wyszukajAdresatowPoNazwisku
    wyswietlWszystkichAdresatow
    usunAdresata
    podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata
    edytujAdresata
    zmianaHaslaZalogowanegoUzytkownika*/
};

#endif
