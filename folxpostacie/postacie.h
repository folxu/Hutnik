//statystyki postaci i glownego bohatera

#include <iostream>
#include <string>
using namespace std;

// ********************************************
// *************   G L O W N Y   **************
// *************  B O H A T E R  **************
// ********************************************

class GlownyBohater
{
public:
    int HP=100;
    int Sila=10;
    int Obrona=10;
    int Inteligencja=0; // xd
    int Lvl=1;

    //int Wytrzymalosc; ??? chyba niepotrzebne


    void wczytaj();  //wczytuje statystyki
};



// ********************************************
// ************* P O S T A C I E **************
// *************        W        **************
// *************     G R Z E     **************
// ********************************************



class Baran //Baran to ten ziomek ktory w PROLOGU bil sie z glownym bohaterem przy WC
{
public:
    int HP=100;
    int Sila=30;
    int Obrona=30;
    int Inteligencja=1;
    int Lvl=4;

    void wczytaj(); //wczytuje barana xD!

};
