#include <iostream>

using namespace std;
int main()
{
    long vuosiluku, syntymavuosi;

    cout << "Kuluvan vuoden vuosiluku: ";
    cin >> ws >> vuosiluku;
    cout << "\nSyntymävuotesi: ";
    cin >> ws;
    cin >> syntymavuosi;
    cout << "\nSinun ikäsi on: " << (vuosiluku - syntymavuosi) << endl;

    return 0;
}
