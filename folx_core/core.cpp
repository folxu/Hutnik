#include "core.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
using namespace std;
glownybohater::glownybohater() { } // ??
void glownybohater::wczytajwalke(poboczna baran) //do zmiany.
{
//    ============================
//              KOLORY
//    ============================

    HANDLE menuCoChceszZrobic;
    HANDLE menuwybor;
    HANDLE menudecyzja;

    HANDLE kbialy; //15
    HANDLE kniebieski; //1
    HANDLE kczerwony; //12
    HANDLE kblekitny; //11
    HANDLE kjasnozolty; //14
    HANDLE kzielony; //10
    HANDLE kzielonyciemny; //2

    int wybor;
    int codalej;
    //while (true)
    //{
        // menu
        kbialy = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(kbialy, 15);
        cout << "===================" << endl;
        cout << "Co chcesz zrobic?" << endl;
        cout << "===================" << endl;

        kjasnozolty = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(kjasnozolty, 14);

        cout << "1. Uderz przeciwnika!" << endl;
        cout << "2. Uzyj skilla w przeciwnika!" << endl;
        cout << "3. Informacje o przeciwniku!" << endl;
        cout << endl;

        kczerwony = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(kczerwony, 12);
        cout << "Twoj wybor: ";
        cin >> wybor;
        cout << endl;
        //Switch do menu.
        switch (wybor)
        {
        case 1:

            Sleep(1000);
            Beep(500,200);

            kbialy = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(kbialy, 15);

            cout << "Przygotowywujesz sie do walki.." << endl;
            Sleep(1500);
            cout << "Wykonujesz cios!" << endl;
            cout << endl;

            Sleep(1000);
            Beep(500,200);
            BohaterZadanyDMG = BohaterAtak + BohaterSila;   // do zmiany!

            kzielonyciemny = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(kzielonyciemny, 2);

            cout << "Zadajesz przeciwnikowi: ";


            kczerwony = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(kczerwony, 4);

            cout <<  BohaterZadanyDMG << " obrazen.. " << endl;

            baran.PPBZostaloHP = baran.PPBHP - BohaterZadanyDMG;

            Sleep(500);

            kzielonyciemny = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(kzielonyciemny, 2);

            cout << "Przeciwnikowi zostalo: ";

            kczerwony = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(kczerwony, 4);

            cout << baran.PPBZostaloHP << " zdrowia.." << endl;
            Sleep(2000);


            //Jesli przeciwnik przezyl to..
            if (baran.PPBZostaloHP!=0)  // Jest rozne od 0?
            {
                cout << endl;
                while(true)
                {
                    cout << "Niestety " << endl;
                    cout << endl;
                    cout << "1. Wykonaj kolejny cios w przeciwnika!" << endl;
                    cout << "2. Uzyj skilla i rozwal oponenta w mak!" << endl;
                    cout << "Twoj wybor: ";
                    cin >>codalej;
                    cout << endl;
                    //Switch do => codalej
                    switch (codalej)
                    {
                    case 1:
                        //prawdopodobnie glownybohater::nastepnycios?
                        //wykonanie kolejnego ciosu
                        break; //break do case 1: [codalej]
                    case 2:
                        //menu + skille?
                        glownybohater::wczytajskille();
                        break; //break do case 2.
                    default:
                        cout << "Wybierz 1 lub 2! " << endl;
                        break;
                    }
                } //tutaj jest koniec petli while
            }
            else
            {
                cout << endl;
                cout << "Brawo! Rozwaliles przeciwnika!" << endl; //Koniec if "baran.pozostalohp != 100"
            }
            break; //break do case 1:
        case 2:
            glownybohater::menuskille();
            break;
        case 3:
            cout << "Nie mozesz opuscic walki!" << endl;
            break;
        default:
            cout << "Wybierz 1,2,3" << endl;
            break;

        } // koniec switcha (glowne menu)
    //}   // koniec while przed menu..

}
void glownybohater::menuskille()                    // Menu skilli
{
    if (BohaterPoziom >= 10)
    {
        glownybohater::wczytajskille();             // Wczytuje skille
    }
    else
    {
        cout << "Skille sa dostepne od poziomu 10!" << endl;
        cout << "Aktualnie posiadasz: " << BohaterPoziom << " poziom " << endl;
        cout << endl;
    }
}
void glownybohater::wczytajskille()                 // Wczytuje skille
{
    cout << "Lista skilli ktore posiadasz: " << endl;
    //soon
}
