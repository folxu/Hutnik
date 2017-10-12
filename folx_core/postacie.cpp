#include "postacie.h"
#include <iostream>
#include <cstdlib>
#include <time.h> // lub ctime
using namespace std;


void GlownyBohater::ZadaneObrazenia()
{
    BohaterZadanyDMG = BohaterAtak + BohaterSila;
    cout << "Zadales " << BohaterZadanyDMG << " obrazen";
}



void PobocznaPostacBaran::BZadaneObrazenia()
{
    PPBZadanyDMG = PPBAtak + PPBSila;
    cout << "Otrzymales " << PPBZadanyDMG << " obrazen ";
}
