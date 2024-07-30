#include <iostream>
using namespace std;

struct Osoba
{
    string imie;
    string nazwisko;
    int rok;
    int mies;
    int dzien;
};

Osoba wczytywanieosoby()
{
    Osoba osoba;
    cout << "podaj imie: ";
    cin >> osoba.imie;
    cout << "podaj nazwisko: ";
    cin >> osoba.nazwisko;
    cout << "podaj rok: ";
    cin >> osoba.rok;
    cout << "podaj mies: ";
    cin >> osoba.mies;
    cout << "podaj dzien: ";
    cin >> osoba.dzien;
    return osoba;
}

void drukujosobe(Osoba osoba)
{
    cout << "imie i nazwisko: " << osoba.imie << " " << osoba.nazwisko;
    cout << " urodzony: " << osoba.rok << "-" << osoba.mies << "-" << osoba.dzien;
}

int main()
{
    Osoba tablica[10];
    // Osoba osoba = wczytywanieosoby();
    // drukujosobe(osoba);
    bool zapierdalaj = true;
    int licznik = 0;
    while (zapierdalaj)
    {

        tablica[licznik] = wczytywanieosoby();
        char TczyN;
        if (10 - licznik > 0)
        {
            cout << "Zostało " << 10 - licznik << " przebiegów. Czy dalej zapierdalac? (T - tak) (N - nie)  --> ";
            cin >> TczyN;
        }
        else
        {
            cout << "!NIE MOŻESZ KONTYNUOWAĆ!";
            break;
        }

        licznik++;
        if (TczyN == 'N')
        {
            break;
        }
    }
    for (int i = 0; i < licznik; i++)
    {
        drukujosobe(tablica[i]);
        cout << endl;
    }
}