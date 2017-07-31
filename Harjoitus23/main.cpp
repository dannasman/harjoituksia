#include <iostream>

using namespace std;

int Summaa(int, int);

int main()
{
    int luku1, luku2, summa;
    cout << "Syötä kaksi kokonaislukua: " << endl;
    cin >> ws >> luku1;
    cin >> ws >> luku2;
    summa = Summaa(luku1, luku2);
    cout << "Lukujen summa: " << summa << endl;
    return 0;
}

int Summaa(int p_luku1, int p_luku2)
{
    int summa;
    summa = p_luku1 + p_luku2;
    return(summa);
}
