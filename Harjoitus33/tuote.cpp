#include <iostream>

using namespace std;

#include <string>
#include "tuote.h"

void Tuote::Kysy()
{
    cout << "Syötä tuotteen nimike: ";
    cin >> ws >> nimike;
    cout << "Syötä tuotteen kappalehinta: ";
    cin >> ws >> kappalehinta;
    cout << "Syötä tuotteen varastomäärä: ";
    cin >> ws >> varastomaara;
}
void Tuote::Nayta()
{
    cout << "Tuotteen nimike: " << nimike << endl;
    cout << "Tuotteen kappalehinta: " << kappalehinta << endl;
    cout << "Tuotteen varastomäärä: " << varastomaara << endl;
}
bool Tuote::VertaaNimike(char* haku)
{
    if(*nimike == *haku)
        return true;
    else
        return false;
}
bool Tuote::Muuta(int p_muutos)
{
    string uusi;
    int summa;
    int vrstmr;
    vrstmr = stoi(varastomaara);
    summa = vrstmr + p_muutos;
    uusi = to_string(summa);
    if(summa >= 0)
    {
        varastomaara = uusi;
        return true;
    }
    else
        return false;
}
