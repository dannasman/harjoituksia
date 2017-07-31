#include <iostream>

using namespace std;

#include <string>

int main()
{
    short k;
    int i;
    float m;
    double j;
    char merkki;
    char merkkijono1[6] = "Hello";
    string merkkijono2 = "Hello";
    cout << sizeof k << endl;
    cout << sizeof i << endl;
    cout << sizeof m << endl;
    cout << sizeof j << endl;
    cout << sizeof merkki << endl;
    cout << sizeof merkkijono1 << endl;
    cout << sizeof merkkijono2 << endl;

    return 0;
}
