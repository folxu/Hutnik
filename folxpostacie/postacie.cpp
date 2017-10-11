//kod do statystyk z postacie.h

#include "postacie.h"
#include <iostream>
#include <cstdlib>
#include <time.h> // lub ctime

using namespace std;

void GlownyBohater::wczytaj() // Klasa::Statystyki
{
    //test

    cout << "Twoje HP " << HP << endl;
    cout << "Twoja Sila " << Sila << endl;
    cout << "Twoja Obrona " << Obrona << endl;
    cout << "Twoja Inteligencja " << Inteligencja <<  endl;
    cout << "Twoj Lvl " << Lvl << endl;

}

void GlownyBohater::walka()
{
    srand(time(NULL)); //pobierz liczbe sekund od 1970 do momentu wywolania tej linijki.
    PoziomHP = rand()%100+Sila+Lvl; //do tego + sila + itemy [soon]
    if (PoziomHP < HP)
    {
        cout << "Zadales: " << PoziomHP << endl;
        cout << "Zaraz bedzie kolejna runda!" << endl;
    }
    else
    {
        // nwm
    }

}


void Baran::wczytaj()
{
    cout << "HP Barana: " << HP << endl;
    cout << "Sila Barana: " << Sila << endl;
    cout << "Obrona Barana " << Obrona << endl;
    cout << "Inteligencja Barana " << Inteligencja << endl;
    cout << "Lvl Barana " << Lvl << endl;

}

void Baran::walka()
{
    srand(time(NULL)); //pobierz liczbe sekund od 1970 do momentu wywolania tej linijki.
    PoziomHP = rand()%100+Sila; //do tego + sila + itemy [soon]
    if (PoziomHP < HP)
    {
        cout << "Zadales: " << PoziomHP << endl;
        cout << "Zaraz bedzie kolejna runda!" << endl;
    }
    else
    {
        // ?????????
    }
}

