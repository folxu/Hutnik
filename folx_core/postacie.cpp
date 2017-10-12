#include "postacie.h"
#include <iostream>
#include <cstdlib>
#include <time.h> // lub ctime

using namespace std;

void GlownyBohater::ZadaneObrazenia()
{
    BohaterZadanyDMG = BohaterAtak + BohaterSila;
    cout << "Zadales " << BohaterZadanyDMG << " obrazen" <<endl;
}

void GlownyBohater::ZostaloHP()
{
    // Jak zrobic otrzymane obrazenia od przeciwnika - twoje hp?
}



//          =========================================================================



void PobocznaPostacBaran::BZadaneObrazenia()
{
    PPBZadanyDMG = PPBAtak + PPBSila;
    cout << "Poboczna Postac: " << imie << " Zadala Ci: " << PPBZadanyDMG << " obrazen ";
}
