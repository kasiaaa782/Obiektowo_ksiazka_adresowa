#include "MenuUzytkownika.h"

int MenuUzytkownika::menuUzytkownika(vector<Uzytkownik> &uzytkownicy, int idZalogowanegoUzytkownika) {
    char wybor;
    while(true) {
        wybor = wybierzOpcjeZMenuUzytkownika();
        switch (wybor) {
        case '1':
            //idOstatniegoAdresata = dodajAdresata(adresaci, idZalogowanegoUzytkownika, idOstatniegoAdresata);
            break;
        case '2':
            //wyszukajAdresatowPoImieniu(adresaci);
            break;
        case '3':
            //wyszukajAdresatowPoNazwisku(adresaci);
            break;
        case '4':
            //wyswietlWszystkichAdresatow(adresaci);
            break;
        case '5':
            // idUsunietegoAdresata = usunAdresata(adresaci);
            //idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
            break;
        case '6':
            //edytujAdresata(adresaci);
            break;
        case '7':
            zmianaHaslaZalogowanegoUzytkownika(uzytkownicy, idZalogowanegoUzytkownika);
            break;
        case '8':
            idZalogowanegoUzytkownika = 0;
            //adresaci.clear();
            return idZalogowanegoUzytkownika;
        }
    }
}

char MenuUzytkownika::wybierzOpcjeZMenuUzytkownika() {
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

void MenuUzytkownika::zmianaHaslaZalogowanegoUzytkownika(vector <Uzytkownik> &uzytkownicy, int idZalogowanegoUzytkownika) {
    system("cls");
    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    noweHaslo = MetodyPomocnicze::wczytajLinie();

    for (vector <Uzytkownik>::iterator itr = uzytkownicy.begin(); itr != uzytkownicy.end(); itr++) {
        if (itr -> pobierzId() == idZalogowanegoUzytkownika) {
            itr -> pobierzHaslo() = noweHaslo;
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
        //zapiszWszystkichUzytkownikowDoPliku(uzytkownicy, nazwaPlikuZUzytkownikami);
    }
}

/*void MenuUzytkownika::zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy, string nazwaPlikuZUzytkownikami)
{
    fstream plikTekstowy;
    string liniaZDanymiUzytkownika = "";
    vector <Uzytkownik>::iterator itrKoniec = --uzytkownicy.end();

    plikTekstowy.open(nazwaPlikuZUzytkownikami.c_str(), ios::out);

    if (plikTekstowy.good() == true)
    {
        for (vector <Uzytkownik>::iterator itr = uzytkownicy.begin(); itr != uzytkownicy.end(); itr++)
        {
            liniaZDanymiUzytkownika = zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(*itr);

            if (itr == itrKoniec)
            {
               plikTekstowy << liniaZDanymiUzytkownika;
            }
            else
            {
                plikTekstowy << liniaZDanymiUzytkownika << endl;
            }
            liniaZDanymiUzytkownika = "";
        }
    }
    else
    {
        cout << "Nie mozna otworzyc pliku " << nazwaPlikuZUzytkownikami << endl;
    }
    plikTekstowy.close();
}


string MenuUzytkownika::zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik)
{
    string liniaZDanymiUzytkownika = "";

    liniaZDanymiUzytkownika += MetodyPomocnicze::konwerjsaIntNaString(uzytkownik.pobierzId())+ '|';
    liniaZDanymiUzytkownika += uzytkownik.pobierzLogin() + '|';
    liniaZDanymiUzytkownika += uzytkownik.pobierzHaslo() + '|';

    return liniaZDanymiUzytkownika;
}*/
