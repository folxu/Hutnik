//statystyki postaci i glownego bohatera

#include <iostream>
#include <string>
using namespace std;

class GlownyBohater
{
private:
    int BohaterAtak = 1;            // Atak = Hit => Zadane obrazenia [Defaultowo 1]
    int BohaterObrona = 5;          // Obrona | [Defaultowo 5]
    int BohaterSila = 5;            // Sila | Si³a bohatera | [Defaultowo: 5]
    int BohaterHP = 50;             // HP Bohatera | [Defaultowo: 50! => HP bêdzie siê zwiêkszaæ z itemami!]
    int BohaterZadanyDMG;           // Zadane obrazenia [postacie.cpp]
    int BohaterowiZostaloHP;        // Ilosc HP jakie zostalo
public:
    void ZadaneObrazenia();         // Zapisuje w pamieci komputera Zadane Obrazenia
    void ZostaloHP();               // Zapisuje w pamieci komputera HP jakie Ci zostalo
};


//          =========================================================================


class PobocznaPostacBaran
{
private:
    string imie = "Baran";
    int PPBAtak = 5;                // Atak = Hit => Zadane obrazenia [Defaultowo 5]
    int PPBObrona = 10;             // Obrona   | Defaultowo [10]
    int PPBSila = 10;               // Sila     | Defaultowo [100]
    int PPBHP = 100;                // HP       | Defaultowo [100]
    int PPBZadanyDMG;               // Zliczenie Zadanych Obrazen
    int PPBZostaloHP;               // Ilosc HP jakie zostalo.

public:
    void BZadaneObrazenia();
    void BZostaloHP();
};
