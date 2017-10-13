#include "postacie.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h> // lub ctime
using namespace std;


glownybohater::glownybohater() {} // ??????

void glownybohater::wczytajwalke( poboczna Baran )
{
    int wybor;

    cout << "Co chcesz zrobic?" << endl;
    cout << "1. Uderz przeciwnika" << endl;
    cout << "2. Wyjdz z walki" << endl;
    cout << "Twoj wybor:" << endl;
    cin >> wybor;

    switch (wybor)
    {
    case 1:
        BohaterZadanyDMG = BohaterAtak + BohaterSila;
        cout << "Zadales przeciwnikowi: " << BohaterZadanyDMG << " obrazen " << endl;
        Baran.PPBZostaloHP = Baran.PPBHP - BohaterZadanyDMG;
        cout << "Przeciwnikowi zostalo: " << Baran.PPBZostaloHP << " zdrowia " << endl;
        break;
    case 2:
        cout << "Nie mozesz uciec!";
    default:
        cout << "Wybierz 1 lub 2!" << endl;
        break;
    }

}




/*

                          FUCK
                          THIS
                          :)


void GlownyBohater::ZadaneObrazenia()
{
    BohaterZadanyDMG = BohaterAtak + BohaterSila;
    cout << "Zada\210e\230 " << BohaterZadanyDMG << " obra\276e\344";
}

void GlownyBohater::wczytajwalke()
{
    cout << "Co chcesz zrobi\276" << endl;
    //PobocznaPostacBaran::PPBZostaloHP = BohaterAtak - PPBObrona;
    Z
}



void PobocznaPostacBaran::BZadaneObrazenia()
{

    PPBZadanyDMG = PPBAtak + PPBSila;
    cout << "Otrzyma\210e\230 " << PPBZadanyDMG << " obra\276e\344 ";
}
*/
