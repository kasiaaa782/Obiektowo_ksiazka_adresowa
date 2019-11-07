#include "MenuUzytkownika.h"

int MenuUzytkownika::menuUzytkownika() {
    int idZalogowanegoUzytkownika;
    char wybor;
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
        //zmianaHaslaZalogowanegoUzytkownika(uzytkownicy, idZalogowanegoUzytkownika);
        break;
    case '8':
        idZalogowanegoUzytkownika = 0;
        //adresaci.clear();
        return idZalogowanegoUzytkownika;
    }
}

char MenuUzytkownika::wybierzOpcjeZMenuUzytkownika()
{
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
