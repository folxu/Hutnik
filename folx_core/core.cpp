#include "core.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h> // lub ctime
using namespace std;

glownybohater::glownybohater() { } // ?????? xD


void glownybohater::wczytajwalke(poboczna baran) //lol

{
    int wybor;
    int codalej;

    while (true)
    {


        //wczytanie menu..

        cout << "Co chcesz zrobic?" << endl;
        cout << endl;
        cout << "1. Uderz przeciwnika!" << endl;
        cout << "2. Uzyj skilla w przeciwnika!" << endl;
        cout << "3. Opusc walke!" << endl;
        cout << "Twoj wybor: ";
        cin >> wybor;
        cout << endl;

        //switch do menu

        switch (wybor)
        {
        case 1:
            //Sleep(1000);
            cout << "Przygotowywujesz sie do walki.." << endl;
            //Sleep(1500);
            cout << "Wykonujesz pierwszy cios!" << endl;
            //Sleep(1000);
            BohaterZadanyDMG = BohaterAtak + BohaterSila;
            cout << "Zadajesz przeciwnikowi: " << BohaterZadanyDMG << " obrazen.. " << endl;
            baran.PPBZostaloHP = baran.PPBHP - BohaterZadanyDMG;
            Sleep(500);
            cout << "Przeciwnikowi zostalo: " << baran.PPBZostaloHP << " zdrowia.." << endl;

            //Jesli Baran przezyl to..

            if (baran.PPBZostaloHP!=0)
            {
                cout << endl;
                //instrukcja while do zapetlenia "dojechania" Barana
                while(true)
                {
                    cout << "Co dalej?" << endl;
                    cout << endl;
                    cout << "1. Wykonaj kolejny cios w przeciwnika!" << endl;
                    cout << "2. Uzyj skilla i orozwal oponenta w mak!" << endl;
                    cout << "Twoj wybor: ";
                    cin >>codalej;
                    cout << endl;

                    //kolejny switch do "codalej"->

                    switch (codalej)
                    {
                    case 1:
                        //instrukcja do case 1 [codalej]:
                        //wykonanie kolejnego ciosu
                        break; //break do case 1: [codalej]

                    case 2:
                        //instrukcja do case 2:
                        if (BohaterPoziom >= 10)
                        {
                            glownybohater::skille();
                        }
                        else
                        {
                            cout << "Przykro mi ale skille sa dostepne od poziomu 10!" << endl;
                            cout << "Aktualnie posiadasz: " << BohaterPoziom << " poziom " << endl;
                            cout << endl;
                        }
                        break; //break do case2: [codalej]
                    default:
                        cout << "Zly wybor! " << endl;
                        break;
                    }

                } //tutaj jest koniec petli while ktora jest po kliknieciu "1" gdy Baran przezyl
            }
            else
            {
                cout << endl;
                cout << "Brawo! Rozwaliles przeciwnika!" << endl; //Koniec if "baran.pozostalohp < 100"
                //exit (EXIT_FAILURE);

            }
            break; //break do case 1:

        case 2:

            //instrukcja do case 2 z glownego menu

            if (BohaterPoziom>=10)
            {
                cout << "Menu dostêpnych skilli:"<< endl;
                glownybohater::skille();
            }
            else
            {
                cout << "Przykro mi ale skille sa dostepne od poziomu 10!" << endl;
                cout << "Aktualnie posiadasz: " << BohaterPoziom << " poziom " << endl;
            }
            break; //break do case 2 z glownego menu

        case 3:
            //instrukcja do case 3
            cout << "Nie mozesz opuscic walki!";
            break; //break do case 3 z glownego menu

        default:
            cout << "Wybierz 1,2,3" << endl;
            break;



        } // koniec switcha (glowne menu)

    }   // koniec while przed menu..

}

void glownybohater::skille()
{
    cout << "Menu dostepnych skilli:" << endl;
    cout << endl;
    cout << "[Do zrobienia]" << endl;
}
