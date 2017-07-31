#include <iostream>

using namespace std;
enum Arvosanat {A = 0, B, C, D, E, F};
int main()
{

    int arvosana;

    cout << "Anna arvosana väliltä 0-5: ";
    cin >> ws >> arvosana;
    if(arvosana == A)
        cout << "Hylätty" << endl;
    if(arvosana == B || arvosana == C)
        cout << "Tyydyttävä" << endl;
    if(arvosana == D || arvosana == E)
        cout << "Hyvä" << endl;
    if(arvosana == F)
        cout << "Kiitettävä" << endl;

    return 0;
}
