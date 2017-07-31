#include <iostream>

using namespace std;

struct TUOTE
{
    int i;
};

int main()
{
    int luku1;
    int &viite1 = luku1;
    TUOTE tietue;
    TUOTE &viite2 = tietue;

    cout << &viite1 << endl;
    cout << &viite2.i << endl;
    return 0;
}
