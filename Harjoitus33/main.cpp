#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "tuote.h"

using namespace std;

int KysyValinta();

int main()
{
    Tuote *Oliot[10] = {NULL};
    char haku[10];
    int valinta, i;
    valinta = KysyValinta();
    while(valinta != 0)
    {
        switch(valinta)
        {
        case 1: i = 0;
            while(i < 10 && Oliot[i] != NULL)
                i++;
            if(i < 10)
            {
                Oliot[i] = new Tuote;
                Oliot[i]->Kysy();
            }
            else
                cout << "Luettelo on täynnä" << endl;
            break;

        case 2: i = 0;
            while(i < 10 && Oliot[i] != NULL)
            {
                if(Oliot[i] != NULL)
                    Oliot[i]->Nayta();
                i++;
            }
            break;

        case 3: i = 0;
            cout << "Syötä hakemasi tuotteen nimike: ";
            cin >> haku;
            while(i < 10 && Oliot[i] != NULL)
            {
                if(Oliot[i]->VertaaNimike(haku))
                {
                    Oliot[i]->Nayta();
                    break;
                }
                else
                    i++;
            }
            break;

        case 4: i = 0;
            int muutos;
            cout << "Syötä muutettavan tuotteen nimike: ";
            cin >> haku;
            cout << "Syötä saldon muutos: ";
            cin >> muutos;
            while(i < 10 && Oliot[i] != NULL)
            {
                if(Oliot[i]->VertaaNimike(haku))
                {
                    if(Oliot[i]->Muuta(muutos))
                        cout << "Muunnos onnistui" << endl;
                    break;
                }
                else
                    i++;
            }
            break;

        default: cout << "Kyseistä toimintoa ei ole" << endl;
        }
        valinta = KysyValinta();
    }

    for(i = 0; i < 10; i++)
        if(Oliot[i] != NULL)
        {
            delete Oliot[i];
            Oliot[i] = NULL;
        }
    return 0;
}
int KysyValinta()
{
    int valinta;

    cout << "VALIKKO\n";
    cout << "1) Lisää uusi tuote" << endl;
    cout << "2) Näytä kaikki tuotteet ja tiedot" << endl;
    cout << "3) Etsi tuotteen tiedot nimikkeen avulla" << endl;
    cout << "4) Muuta tuotteen varastosaldoa" << endl;
    cout << "0) Lopetus" << endl;
    cin >> valinta;

    return valinta;
}
