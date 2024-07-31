#include <iostream>
using namespace std;

struct Data
{
    int rok;
    int mies;
    int dzien;
};

struct Osoba
{
    string imie;
    string nazwisko;
    Data dzienurodzenia;
};

Osoba wczytywanieosoby()
{
    Osoba osoba;
    cout << "podaj imie: ";
    cin >> osoba.imie;
    cout << "podaj nazwisko: ";
    cin >> osoba.nazwisko;
    cout << "podaj rok: ";
    cin >>  osoba.dzienurodzenia.rok;
    cout << "podaj mies: ";
    cin >> osoba.dzienurodzenia.mies;
    cout << "podaj dzien: ";
    cin >> osoba.dzienurodzenia.dzien;
    return osoba;
}

void drukujosobe(Osoba osoba)
{
    Data data = osoba.dzienurodzenia;
    cout << "imie i nazwisko: " << osoba.imie << " " << osoba.nazwisko;
    cout << " urodzony: " << data.rok << "-" << data.mies << "-" << data.dzien;
}

int main()
{
    Osoba tablica[10];
    bool zapierdalaj = true;
    int licznik = 0;
    while (zapierdalaj)
    {
        if (licznik >= 10) 
        {
            cout << "!NIE MOŻESZ KONTYNUOWAĆ!" << endl;
            break;
        }

        tablica[licznik] = wczytywanieosoby();
        licznik++;

        char TczyN;
        if (licznik < 10)
        {
            cout << "Zostało " << 10 - licznik << " przebiegów. Czy dalej zapierdalac? (T - tak) (N - nie)  --> ";
            cin >> TczyN;
            if (TczyN == 'N')
            {
                zapierdalaj = false;
            }
        }
    }

    for (int i = 0; i < licznik; i++)
    {
        drukujosobe(tablica[i]);
        cout << endl;
    }

    return 0;
}
