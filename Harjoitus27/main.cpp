#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    char merkkijono[80];
    cout << "Syötä merkkijono: " << endl;
    cin >> ws >> merkkijono;
    while(merkkijono[i] != '\0')
        i++;
    char *merkkijono2[i];
    merkkijono2[i] = new char[i];
    if(merkkijono2)
    {
        *merkkijono2[i] = merkkijono[i];
        cout << merkkijono << endl;
        cout << "Merkkijonon pituus: " << i << endl;
    }
    else
        cout << "Merkkijonon varaus epäonnistui" << endl;
    return 0;
}
