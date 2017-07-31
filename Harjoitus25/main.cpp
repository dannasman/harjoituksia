#include <iostream>

using namespace std;

#include "tuote.H"

void Kysy(TUOTE*);

float Kysy(float*);

float LaskeAlennus(float*, float);

void TulostaTuotteet(TUOTE[], TUOTE);

int main()
{
    float prosentti;
    TUOTE tietue;LaskeAlennus(&tietue.kappalehinta, prosentti);
    Kysy(&tietue);
    Kysy(&prosentti);
    LaskeAlennus(&tietue.kappalehinta, prosentti);
    cout << "Tuotteen tunnus: " << tietue.tunnus << endl;
    cout << "Tuotteen nimi: " << tietue.nimi << endl;
    cout << "Tuotteen kappalehinta: " << tietue.kappalehinta << "€" << endl;
    cout << "Tuotteen varastomäärä: " << tietue.varastomaara << endl;
    TUOTE taulu[5];
    TulostaTuotteet(taulu, tietue);


    return 0;

}

void Kysy(TUOTE *p_tietue)
{
    cout << "Syötä tuotteen tunnus: " << endl;
    cin >> ws >> p_tietue -> tunnus;
    cout << "Syötä tuotteen nimi: " << endl;
    cin >> ws >> p_tietue -> nimi;
    cout << "Syötä tuotteen kappalehinta: " << endl;
    cin >> ws >> p_tietue -> kappalehinta;
    cout << "Syötä tuotteen varastomäärä: " << endl;
    cin >> ws >> p_tietue -> varastomaara;
}

float Kysy(float *p_prosentti)
{
    cout << "Syötä tuotteen alennusprosentti: " << endl;
    cin >> ws >> *p_prosentti;
    return(*p_prosentti);
}

float LaskeAlennus(float *p_kplhnt, float p_prosentti)
{
    *p_kplhnt = (*p_kplhnt) * (1 - (p_prosentti / 100));
    return(*p_kplhnt);
}

void TulostaTuotteet(TUOTE p_taulu[], TUOTE p_tietue1)
{
    p_taulu[0].nimi = p_tietue1.nimi;
    p_taulu[0].kappalehinta = p_tietue1.kappalehinta;
    cout << p_taulu[0].nimi << endl;
    cout << p_taulu[0].kappalehinta << "€" << endl;

}
