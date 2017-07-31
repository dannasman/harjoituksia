#include <iostream>

using namespace std;

int main()
{
    int vuosiluku;

    cout << "Syötä jokin vuosiluku" << endl;
    cin >> ws >> vuosiluku;
    if((vuosiluku % 4) == 0)
    {
        while((vuosiluku / 4) % 100 == 0)
        {
            if((vuosiluku / 4 / 100) % 400 == 0)
                cout << "Vuosi on karkausvuosi" << endl;

            if((vuosiluku / 4 / 100) % 400 != 0)
                cout << "Vuosi ei ole karkausvuosi" << endl;
        }

        if((vuosiluku / 4) % 100 != 0)
            cout << "Vuosi on karkausvuosi" << endl;

    }

    if((vuosiluku % 4) != 0)
    {
        cout << "Vuosi ei ole karkausvuosi" << endl;
    }


    return 0;
}
