#include <iostream>

using namespace std;

int main()
{
    int luku1;
    int luku2 = 1;
    cout << "Syötä luku: " << endl;
    cin >> ws >> luku1;
    cout << "KERTOTAULU:" << endl;
    while(luku1 * luku2 <= (luku1 * 10))
    {
        cout << luku2 << " * " << luku1 << " = " << luku1 * luku2 << endl;
        luku2++;
    }


    return 0;
}
