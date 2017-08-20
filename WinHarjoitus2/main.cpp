#include <iostream>
#include "suorakaide.h"

using namespace std;

int KysyValinta();

int main()
{
    int vastaus, ok;
    vastaus = KysyValinta();
    while(vastaus != 0)
    {
        switch(vastaus)
        {
        case 1: ok = SuoraKaide::Lisaa();
            if(ok == 0)
                cout << "\nTietorakenne täyttyi, tietoja ei lisätty";
            break;
        case 2: SuoraKaide::Keskiarvo();
            break;
        default: cout << "\nKyseistä toimintoa ei ole";
        }
        vastaus = KysyValinta();
    }
    SuoraKaide::Tuhoa();
    return 0;
}
int KysyValinta()
{
    int vastaus;
    cout << "\nVALIKKO";
    cout << "\n1) Suorakaiteen arvojen lisäys";
    cout << "\n2) Kaikkien suorakaiteiden alojen keskiarvo";
    cout << "\n0) Lopetus" << endl;
    cin >> ws >> vastaus;
    return vastaus;
}
