//statystyki postaci i glownego bohatera

#include <iostream>
#include <string>
using namespace std;

class poboczna
{
public:
    string imie = "Baran";
    int PPBAtak = 5;                        // Atak = Hit => Zadane obrazenia [Defaultowo 5]
    int PPBObrona = 10;                     // Obrona   | Defaultowo [10]
    int PPBSila = 10;                       // Sila     | Defaultowo [100]
    int PPBHP = 100;                        // HP       | Defaultowo [100]
    int PPBZadanyDMG;                       // Zliczenie Zadanych Obrazen
    int PPBZostaloHP;                       // Ilosc HP jakie zostalo.

    void BZadaneObrazenia();                // Dzieki temu dziala PPBZadanychDMG;
};


//          =========================================================================


class glownybohater
{
public:

    int BohaterAtak = 3;                    // Atak = Hit => Zadane obrazenia [Defaultowo 1]
    int BohaterObrona = 5;                  // Obrona | [Defaultowo 5]
    int BohaterSila = 10;                   // Sila | Si³a bohatera | [Defaultowo: 5]
    int BohaterHP = 50;                     // HP Bohatera | [Defaultowo: 50! => HP bêdzie siê zwiêkszaæ z itemami!]
    int BohaterZadanyDMG;                   // Zadane obrazenia [postacie.cpp]
    int BohaterowiZostaloHP;                // Ilosc HP jakie zostalo
    int BohaterPoziom = 1;                  // Poziom bohatera | [Na start: 1]
    glownybohater();
    void ZadaneObrazenia();                 // Dzieki temu dziala BohaterZadanychDMG;
    void wczytajwalke( poboczna Baran );    // Wczytuje menu walki



};
