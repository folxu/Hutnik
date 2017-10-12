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
    // Zadane obrazenia od przeciwnika (od Barana) - twoje hp = ZostaloHP
    // Ale jak to zrobic?
}

//          =========================================================================
//                                  POBOCZNE POSTACIE
//          =========================================================================


void PobocznaPostacBaran::BZadaneObrazenia()
{
    PPBZadanyDMG = PPBAtak + PPBSila;
    cout << "Poboczna Postac: " << imie << " zadala Ci: " << PPBZadanyDMG << " obrazen ";
}

void PobocznaPostacBaran::BZostaloHP()
{
    // Zadane obrazenia od przeciwnika (Glowny Bohater) - HP Pobocznej Postaci (Barana) = BZostaloHP
    // Ale jak to zrobic?
}
