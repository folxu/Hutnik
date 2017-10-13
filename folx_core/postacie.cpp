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
    int codalej;

    cout << "Co chcesz zrobic?" << endl;
    cout << "1. Uderz przeciwnika" << endl;
    cout << "2. Wyjdz z walki" << endl;
    cout << "Twoj wybor:";;
    cin >> wybor;
    cout << endl;
    cout << endl;

    switch (wybor)
    {
    case 1:
        Sleep(300);
        cout << "Przygotowywujesz si\251 do walki.." << endl;
        Sleep(1500);
        cout << "Wykonujesz pierwszy cios.." << endl;
        Sleep(1000);
        BohaterZadanyDMG = BohaterAtak + BohaterSila;
        cout << "Zadajesz przeciwnikowi: " << BohaterZadanyDMG << " obrazen " << endl;
        Baran.PPBZostaloHP = Baran.PPBHP - BohaterZadanyDMG;
        Sleep(500);
        cout << "Przeciwnikowi zostalo: " << Baran.PPBZostaloHP << " zdrowia " << endl;

        if (Baran.PPBZostaloHP<100)
        {
            cout << endl;
            cout << "Co dalej?" << endl;
            cin >> codalej;
        }
        else
        {
            cout << "Brawo! Pokona³eœ " << Baran.imie << endl;
        }

        break;
    case 2:
        cout << "Skille? a na co to komu?" << endl;
    case 3:
        cout << "Kolegooo...nie uciekamy z walki ;)" << endl;
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
