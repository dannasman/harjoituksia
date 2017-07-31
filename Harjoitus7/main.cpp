#include <iostream>

using namespace std;

#include <cstring>

int main()
{

    char merkkijono1[30];
    char merkkijono2[30];


    cout << "Syötä ensimmäinen merkkijono: ";
    cin >> ws;
    cin.get(merkkijono1, 30);
    memmove(merkkijono2, merkkijono1, 30);
    cout << "\nSyötä toinen merkkijono: ";
    cin >> ws;
    cin.get(merkkijono1, 30);
    cout << "\nEnsimmäinen merkkijono: " << merkkijono1 << endl;
    cout << "\nToinen merkkijono: " << merkkijono2 << endl;

    return 0;
}
