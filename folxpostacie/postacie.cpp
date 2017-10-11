//kod do statystyk z postacie.h

#include "postacie.h"
#include <iostream>

using namespace std;

void GlownyBohater::wczytaj() // Klasa::Statystyki
{
    //Sprawdzenie czy klasa dziala - zczytanie statystyk
    cout << "Twoje HP " << HP << endl;
    cout << "Twoja Sila " << Sila << endl;
    cout << "Twoja Obrona " << Obrona << endl;
    cout << "Twoja Inteligencja " << Inteligencja <<  endl;
    cout << "Twoj Lvl " << Lvl << endl;

}



// ********************************************
// ************* P O S T A C I E **************
// *************        W        **************
// *************     G R Z E     **************
// ********************************************



void Baran::wczytaj()
{
    cout << "HP Barana: " << HP+15 << endl;

}

