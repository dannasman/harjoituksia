#include <iostream>

using namespace std;

void Summaa(int*, int, int);

int main()
{
    int summa;
    int luku1, luku2;

    cout << "Syötä kaksi lukua: " << endl;
    cin >> ws >> luku1;
    cin >> ws >> luku2;
    Summaa(&summa, luku1, luku2);
    cout << "Summa: " << summa << endl;
}
void Summaa(int *p_summa, int p_luku1, int p_luku2)
{
   *p_summa = p_luku1 + p_luku2;
}
