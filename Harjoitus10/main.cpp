#include <iostream>

using namespace std;

enum Arvosanat{A = 0, B, C, D, E, F};

int main()
{
    int arvosana;

    while(arvosana != 9)
    {
        cout << "Syötä arvosana lukujen 0-5 väliltä (Keskeytys CTRL + C): " << endl;
        cin >> ws >> arvosana;
        switch(arvosana)
        {
        case A: cout << "Hylätty" << endl;
        break;
        case B:
        case C: cout << "Tyydyttävä" << endl;
        break;
        case D:
        case E: cout << "Hyvä" << endl;
        break;
        default: cout << "Syöttämäsi numero ei ole lukujen 0-5 välillä" << endl;
        break;
        }
    }

    return 0;
}
