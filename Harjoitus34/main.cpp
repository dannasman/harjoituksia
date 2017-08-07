#include <iostream>
#include "suorakaide.h"

using namespace std;

int main()
{
    SuoraKaide Olio;
    float ala, p_sivu1, p_sivu2;
    cout << "Syötä suorakaiteen pituus: ";
    cin >> p_sivu1;
    cout << "Syötä suorakaiteen leveys: ";
    cin >> p_sivu2;
    Olio.Alusta(p_sivu1, p_sivu2);
    ala = Olio.PintaAla();
    cout << "Pinta-ala : " << ala << endl;
    return 0;
}
