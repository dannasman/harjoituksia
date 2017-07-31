#include <iostream>

using namespace std;
void Laske(double, double);
double tulo;

int main()
{
    double luku1 = 2;
    double luku2;
    cout << "Syötä luku: ";
    cin >> luku2;
    Laske(luku1, luku2);
    cout << tulo <<endl;
    return 0;
}

void Laske(double luku1, double luku2)
{
    tulo = luku1 * luku2;
}
