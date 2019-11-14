#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika(){
    uzytkownikMenadzer.logowanieUzytkownika();
    if(uzytkownikMenadzer.czyUzytkownikJestZalogowany()){
        adresatMenadzer = new AdresatMenadzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::wylogowanieUzytkownika(){
    uzytkownikMenadzer.wylogowanieUzytkownika();
    delete adresatMenadzer;
    adresatMenadzer = NULL;
}

void KsiazkaAdresowa::dodajAdresata(){
    if(uzytkownikMenadzer.czyUzytkownikJestZalogowany()){
        adresatMenadzer ->dodajAdresata();
    }
    else {
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}
