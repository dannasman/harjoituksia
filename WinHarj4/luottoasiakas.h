#ifndef LUOTTOASIAKAS_H
#define LUOTTOASIAKAS_H
#include <string>
#include "asiakas.h"

using namespace std;

class LuottoAsiakas : public Asiakas
{
    int velkasaldo;
    int luottokoodi;
public:
    LuottoAsiakas();
    LuottoAsiakas(string, string, int, int);
    ~LuottoAsiakas();
    void Kysy();
    void Nayta();
    void Saldo();
    void Luotto();
};

#endif // LUOTTOASIAKAS_H
