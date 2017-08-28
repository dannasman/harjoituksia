#include "luottoasiakas.h"
#include <iostream>

using namespace std;

LuottoAsiakas::LuottoAsiakas()
{
    velkasaldo = 0;
    luottokoodi = 1;
}
LuottoAsiakas::~LuottoAsiakas()
{
    velkasaldo = 0;
    luottokoodi = 1;
}
LuottoAsiakas::LuottoAsiakas(string p_asiakasnumero, string p_nimi, int p_velkasaldo, int p_luottokoodi) :
    Asiakas(p_asiakasnumero, p_nimi)
{
    velkasaldo = p_velkasaldo;
    luottokoodi = p_luottokoodi;
}

void LuottoAsiakas::Kysy()
{
    Asiakas::Kysy();
    cout << "Velkasaldo: ";
    cin >> velkasaldo;
    cout << "Luottokoodi: ";
    cin >> luottokoodi;
}
void LuottoAsiakas::Nayta()
{
    Asiakas::Nayta();
    cout << "Velkasaldo: ";
    cout << velkasaldo << endl;
    cout << "Luottokoodi: ";
    cout << luottokoodi << endl;
}
void LuottoAsiakas::Saldo()
{
    Asiakas::Nimi();
    cout << "Velkasaldo: " << velkasaldo << endl;
}
void LuottoAsiakas::Luotto()
{
        Asiakas::Nimi();
        cout << "Luottokoodi: " << luottokoodi << endl;
}
