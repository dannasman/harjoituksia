#include <iostream>

using namespace std;
struct TUOTE
{
    int tietuex;
    int tietuey;
};

int main()
{
    int luku = 1;
    int *luku2;
    int **luku3;
    TUOTE tietue;
    TUOTE *tietue2;

    luku2 = &luku;
    luku3 = &luku2;
    tietue2 = &tietue;

    cout << *luku2 << endl;
    cout << **luku3 << endl;
    cout << tietue2 -> tietuex << endl;
    cout << &(tietue2 -> tietuex) << endl;
    cout << &tietue << endl;
    return 0;
}
