//statystyki postaci i glownego bohatera

#include <iostream>
#include <string>
using namespace std;

class GlownyBohater
{
public:
    int BohaterAtak = 1;                                        // Atak = Hit => Zadane obrazenia [Defaultowo 1]
    int BohaterObrona = 5;                                      // Obrona | [Defaultowo 5]
    int BohaterSila = 5;                                        // Sila | Si�a bohatera | [Defaultowo: 5]
    int BohaterHP = 50;                                         // HP Bohatera | [Defaultowo: 50! => HP b�dzie si� zwi�ksza� z itemami!]
    int BohaterZadanyDMG;                                       // Zadane obrazenia [postacie.cpp]
    int BohaterowiZostaloHP;                                    // Ilosc HP jakie zostalo

    void ZadaneObrazenia();                                     // Dzieki temu dziala BohaterZadanychDMG;

};


//          =========================================================================


class PobocznaPostacBaran
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
