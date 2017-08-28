#include "asiakas.h"
#include <iostream>

using namespace std;

Asiakas::Asiakas()
{
    asiakasnumero = " ";
    nimi = " ";
}
Asiakas::~Asiakas()
{
    asiakasnumero = " ";
    nimi = " ";
}
Asiakas::Asiakas(string p_asiakasnumero, string p_nimi)
{
    asiakasnumero = p_asiakasnumero;
    nimi = p_nimi;
}

void Asiakas::Kysy()
{
    cout << "Asiakasnumero: ";
    cin >> asiakasnumero;
    cout << "Nimi: ";
    cin >> nimi;
}
void Asiakas::Nayta()
{
    cout << "Asiakasnumero: ";
    cout << asiakasnumero << endl;
    cout << "Nimi: ";
    cout << nimi << endl;
}
void Asiakas::Saldo()
{
    cout << "\nNimi: " << nimi << endl;
    cout << "Ei luottoa" << endl;
}
