#include <iostream>
#include "suorakaide.h"

using namespace std;

int SuoraKaide::lkm = 0;
float SuoraKaide::keskiarvo = 0;
SuoraKaide *SuoraKaide::alat[10] = {NULL};
void SuoraKaide::Kysy()
{
    cout << "Suorakaiteen pituus: ";
    cin >> ws >> sivu1;
    cout << "Suorakaiteen leveys: ";
    cin >> ws >> sivu2;
    ala = sivu1 * sivu2;
}
int SuoraKaide::Lisaa()
{
    int ind = 0;

    while(ind < 10 && alat[ind] != NULL)
        ind++;
    if(ind < 10)
    {
        alat[ind] = new SuoraKaide;
        alat[ind]->Kysy();
        return 1;
    }
    else
        return 0;
}
void SuoraKaide::Keskiarvo()
{
    int ind = 0;
    float summa = 0;

    while(ind < 10 && alat[ind] != NULL)
    {
        summa += alat[ind]->ala;
        ind++;
    }
    keskiarvo = summa / ind;
    cout << keskiarvo;
}
void SuoraKaide::Tuhoa()
{
    int ind = 0;
    while(ind < 10 && alat[ind] !=NULL)
    {
        delete alat[ind];
        alat[ind] = NULL;
        lkm--;
        ind++;
    }
}
