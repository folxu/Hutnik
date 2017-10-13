#include "postacie.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h> // lub ctime
using namespace std;


void GlownyBohater::ZadaneObrazenia()
{
    BohaterZadanyDMG = BohaterAtak + BohaterSila;
    cout << "Zadales " << BohaterZadanyDMG << " obrazen";
}



void PobocznaPostacBaran::BZadaneObrazenia()
{
    HANDLE kolordmg;
    HANDLE tresc;
    PPBZadanyDMG = PPBAtak + PPBSila;
    cout << "Otrzymales " << PPBZadanyDMG << " obrazen ";
}
