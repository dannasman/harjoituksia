#include <iostream>

using namespace std;

#include <string>

int main()
{
    string nimi;
    string loppu = "Loppu";
    int luku = 0;
    while(nimi != loppu)
    {
        cout << "Anna jokin etunimi: " << endl;
        cin >> ws >> nimi;

        if(nimi == loppu)
            break;

        luku++;
    }
    cout << "Syötit " << luku << " nimeä" << endl;

    return 0;
}
