#include <iostream>

using namespace std;

int main()
{   
    float luku;
    int i;
    float taulukko[10];

    for(i = 0; i < 10; i++)
    {
        cout << "Syötä luku: " << endl;
        cin >> ws >> luku;
        taulukko[i] = luku;
    }


    float keskiarvo = ((taulukko[0] + taulukko[1] + taulukko[2] + taulukko[3] + taulukko[4] + taulukko[5] + taulukko[6]
            + taulukko[7] + taulukko[8] + taulukko[9]) / 10);
    cout << "Syöttämiesi lukujen keskiarvo: " << keskiarvo << endl;


    return 0;
}
