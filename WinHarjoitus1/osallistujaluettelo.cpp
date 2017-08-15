#include "osallistujaluettelo.h"
#include "henkilo.h"
#include <iostream>

using namespace std;
Osallistujaluettelo::Osallistujaluettelo()
{
}
void Osallistujaluettelo::Kysy()
{
    char rivi[20];
    cout << "Syötä oppilaan etunimi: ";
    cin >> ws;
    cin.getline(rivi, 20+2);
    Etunimi = rivi;
    cout << "Syötä oppilaan sukunimi: ";
    cin >> ws;
    cin.getline(rivi, 20+2);
    Sukunimi = rivi;
}
void Osallistujaluettelo::Nayta()
{
    cout << "Kurssi: ";
    cout << kurssi << endl;
    cout << "Oppilaan etunimi: ";
    Etunimi.Nayta();
    cout << endl;
    cout << "Oppilaan sukunimi: ";
    Sukunimi.Nayta();
    cout << endl;
}
Osallistujaluettelo::~Osallistujaluettelo()
{
}
