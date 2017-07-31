#include <iostream>

using namespace std;

int main()
{
    int kappalehinta, maara;
    char nimi[30];

    cout << "Tuotteen kappalehinta: ";
    cin >> ws;
    cin >> kappalehinta;
    cout << "\nOstetuiden tuotteiden lukumäärä: ";
    cin >> ws;
    cin >> maara;
    cout << "\nTuotteen nimi: ";
    cin >> ws;
    cin >> nimi;
    cout << "\nTuotteen nimi: " << nimi << endl;
    cout << "\nTuotteiden yhteishinta: " << kappalehinta * maara << endl;

    return 0;
}
