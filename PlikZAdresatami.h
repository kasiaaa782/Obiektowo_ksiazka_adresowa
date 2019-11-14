#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>


using namespace std;

class PlikZAdresatami{

    const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){};

    //wczytajAdresatowZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);

};

#endif
