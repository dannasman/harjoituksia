#include <iostream>

using namespace std;

struct TUOTE
{
    int tunnus;
    char kappalehinta[30];
    int varastomaara;
    char nimi[30];
};

int main()
{

    TUOTE tnns, kplhnt, vrstmr, nm;

    cout << "Anna tuotteen tunnus: " << endl;
    cin >> ws >> tnns.tunnus;
    cout << "Anna tuotteen nimi: " << endl;
    cin >> ws >> nm.nimi;
    cout << "Anna tuotteen kappalehinta: " << endl;
    cin >> ws >> kplhnt.kappalehinta;
    cout << "Anna tuotteen varastomäärä: " << endl;
    cin >> ws >> vrstmr.varastomaara;
    cout << "Tuotteen tunnus: " << tnns.tunnus << endl;
    cout << "Tuotteen nimi: " << nm.nimi << endl;
    cout << "Totteen kappalehinta: " << kplhnt.kappalehinta << endl;
    cout << "Tuotteen varastomäärä: " << vrstmr.varastomaara << endl;

    return 0;
}
