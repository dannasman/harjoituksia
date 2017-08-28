#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <string>
#include <iostream>

using namespace std;

class Asiakas
{
    string asiakasnumero;
    string nimi;
public:
    Asiakas();
    Asiakas(string, string);
    virtual ~Asiakas();
    virtual void Kysy();
    virtual void Nayta();
    virtual void Saldo();
    virtual void Nimi() {cout << nimi << endl;}
};

#endif // ASIAKAS_H
