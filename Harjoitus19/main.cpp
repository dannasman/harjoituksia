#include <iostream>

using namespace std;

struct TUOTE
{
    int tunnus;
    char nimi[10];
    char kappalehinta[10];
    char varastomaara[10];
};

int main()
{
    char valinta;
    while(valinta)
    {
        TUOTE tns, nm, kplhnt, vrstmr;
        TUOTE taulukko[10];

        cout << "VALIKKO" << endl;
        cout << "1) Lisää tuote" << endl;
        cout << "2) Etsi tuote tunnuksella" << endl;
        cout << "0) Lopetus" << endl;
        cin >> ws >> valinta;

        if(valinta == '1')
        {
            int i;
            cout << "Tuotteen tunnus: " << endl;
            cin >> ws >> tns.tunnus;
            cout << "Tuotteen nimi: " << endl;
            cin >> ws >> nm.nimi;
            cout << "Tuotteen kappalehinta: " << endl;
            cin >> ws >> kplhnt.kappalehinta;
            cout << "Tuotteen varastomäärä: " << endl;
            cin >> ws >> vrstmr.varastomaara;
            cout << "Sarake johon haluat siirtää tiedot(0-9): " << endl;
            cin >> ws >> i;
            taulukko[i].tunnus = tns.tunnus;
            taulukko[i].nimi[10] = tns.nimi[10];
            taulukko[i].kappalehinta[10] = kplhnt.kappalehinta[10];
            taulukko[i].varastomaara[10] = vrstmr.varastomaara[10];
        }
        if(valinta =='2')
        {
            int tunnus;
            cout << "Syötä tuotteen tunnus: ";
            cin >> ws >> tunnus;
            if(taulukko[0].tunnus == tunnus)
            {
                cout << "Tuotteen tunnus: " << taulukko[0].tunnus << endl;
                cout << "Tuotteen nimi: " << taulukko[0].nimi[10] << endl;
                cout << "Tuotteen kappalehinta: " << taulukko[0].kappalehinta[10] << endl;
                cout << "Tuotteen varastomäärä: " << taulukko[0].varastomaara[10] << endl;
            }
        }
        if(valinta == '0')
        {
            break;
        }
    }
    return 0;
}

