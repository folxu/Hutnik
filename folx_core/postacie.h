//statystyki postaci i glownego bohatera

#include <iostream>
#include <string>
using namespace std;

class GlownyBohater
{
private:
    // Atak = Hit => Zadane obrazenia [Defaultowo 1]
    int BohaterAtak = 1;

    // Obrona | [Defaultowo 5]
    int BohaterObrona = 5;

    // Sila | Si�a bohatera | [Defaultowo: 5]
    int BohaterSila = 5;

    // HP Bohatera | [Defaultowo: 50! => HP b�dzie si� zwi�ksza� z itemami!]
    int BohaterHP = 50;

    // Wyswietlenie zadanych obra�e� przeciwnikowi
    int BohaterZadanyDMG = BohaterAtak + BohaterSila;

    //Otrzymane obra�enia - Poziom twojego HP
    int ZostaloHP = BohaterHP - BohaterZadanyDMG;


public:

    //voidy

    void test();

};
