
#include <iostream>

using namespace std;

#include <cstring>

#include <cctype>

int main()
{
    char merkki[1];
    int i = 0, s =0;
    int luku;

    cout << "Syötä jokin merkki. " << endl;
    cin >> ws;
    cin.get(merkki);

    while(cin.get(merkki))
    {
        luku = atoi(merkki);

        if(isalpha(merkki))
        {
            cout << "Syötä jokin merkki: ";
            s++;

        }
        if(isdigit(luku))
        {
            cout << "Syötä jokin merkki: ";
            i++;
        }

        if()
    }

}
