#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Syötä haluamasi merkkijonon maksimipituus: " << endl;
    cin >> i;
    char *merkkijono[i];
    merkkijono[i] = new char;
    if(merkkijono)
    {
        cout << "Syötä merkkijono: " << endl;
        cin >> *merkkijono;
    }
    else
        cout << "Muistinvaraus epäonnistui" << endl;
    if(merkkijono)
        cout << *merkkijono << endl;
    delete merkkijono;
    return 0;
}
