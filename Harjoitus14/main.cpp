#include <iostream>

using namespace std;

#include <cstring>

int main()
{
    int lkm = 0;
    char merkkijono1[10];
    char merkkijono2[10];
    cout << "Anna kaksi merkkijonoa: " << endl;
    cin >> ws >> merkkijono1;
    cin >> ws >> merkkijono2;
    while(strncmp(merkkijono1, merkkijono2, lkm) == 0)
    {
        if(strncmp(merkkijono1, merkkijono2, lkm) != 0)
            break;
        lkm++;

        if(strncmp(merkkijono1, merkkijono2, lkm) != 0)
            cout << "Merkkijonoissa on " << lkm -1<< " sama(a) kirjain(ta) alusta luettuna" << endl;
    }
}
