#include <iostream>
#include <typeinfo>
#include "asiakas.h"
#include "luottoasiakas.h"

using namespace std;

int KysyValinta();
int KysyLuotto();
void TulostaLuotto(LuottoAsiakas*);

int main()
{
    Asiakas *asiakkaat[10] = {NULL};
    Asiakas *apu = NULL;
    int valinta, luotto, ind;
    valinta = KysyValinta();
    while(valinta != 0)
    {
        switch(valinta)
        {
        case 1: luotto = KysyLuotto();
            if(luotto == 1)
                apu = new LuottoAsiakas;
            if(luotto == 2)
                apu = new Asiakas;
            if(luotto < 1 || luotto > 2)
            {
                cout << "Syöttämäsi luku ei vastaa edellämainittuja vaihtoehtoja" << endl;
                break;
            }
            ind = 0;
            while(ind < 10 && asiakkaat[ind] != NULL)
                ind++;
            if(ind < 20)
            {
                asiakkaat[ind] = apu;
                asiakkaat[ind]->Kysy();
            }
            else
                cout << "\nAsiakastaulukko täynnä";
            break;
        case 2: ind = 0;
            for(ind = 0; ind < 10 && asiakkaat[ind] != NULL; ind++)
                asiakkaat[ind]->Nayta();
            break;
        case 3: ind = 0;
            for(ind = 0; ind < 10 && asiakkaat[ind] != NULL; ind++)
                asiakkaat[ind]->Saldo();
            break;
        case 4: ind = 0;
            for(ind = 0; ind < 10 && asiakkaat[ind] != NULL; ind++)
                TulostaLuotto(dynamic_cast<LuottoAsiakas*>(asiakkaat[ind]));
            break;
        case 5: ind = 0;
            for(ind = 0; ind < 10 && asiakkaat[ind] != NULL; ind++)
            {
                if(typeid(*asiakkaat[ind]) == typeid(Asiakas))
                    asiakkaat[ind]->Nayta();
            }
            break;
        case 6: ind = 0;
            for(ind = 0; ind < 10 && asiakkaat[ind] != NULL; ind++)
            {
                if(typeid(*asiakkaat[ind]) == typeid(LuottoAsiakas))
                    asiakkaat[ind]->Nayta();
            }
            break;
        default: cout << "\nVirheellinen valinta";
            break;
        }
        valinta = KysyValinta();
    }
    for(ind = 0; ind < 10 && asiakkaat[ind] != NULL; ind++)
    {
        delete asiakkaat[ind];
    }
    return 0;
}
int KysyValinta()
{
    int valinta;
    cout << "\nValikko";
    cout << "\n1) Lisää asiakkaan tiedot";
    cout << "\n2) Tulosta kaikkien asiakkaiden tiedot";
    cout << "\n3) Tulosta kaikkien asiakkaiden velkasaldo";
    cout << "\n4) Tulosta luotollisten asiakkaiden luottokoodit";
    cout << "\n5) Tulosta käteisasiakkaiden tiedot";
    cout << "\n6) Tulosta luotollisten asiakkaiden tiedot";
    cout << "\n0) Lopetus" << endl;
    cin >> valinta;
    return valinta;
}
int KysyLuotto()
{
    int luotto;
    cout << "\nOnko asiakas luotollinen?";
    cout << "\n1) Kyllä";
    cout << "\n2) Ei" << endl;
    cin >> luotto;
    return luotto;
}
void TulostaLuotto(LuottoAsiakas *p_luotto)
{
    if(p_luotto)
        p_luotto->Luotto();
}
