#include <iostream>

using namespace std;

int main()
{
    int kokonaisluku;

    cout << "Syötä jokin kokonaisluku: ";
    cin >> kokonaisluku;
    cout << "\nAntamasi kokonaisluvun jakohäännös, kun jakajana toimii luku 3: " << kokonaisluku % 3 << endl;

    return 0;
}
