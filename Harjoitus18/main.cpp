#include <iostream>

using namespace std;

int main()
{
    int taulukko[4][6] = {{1, 2, 3, 4, 5, 0}, {5, 4, 3, 2, 1, 0}, {6, 7, 8, 9, 10, 0}, {0, 0, 0, 0, 0, 0}};
    taulukko[0][5] = taulukko[0][0] + taulukko[0][1] + taulukko[0][2] + taulukko[0][3] + taulukko[0][4];
    taulukko[1][5] = taulukko[1][0] + taulukko[1][1] + taulukko[1][2] + taulukko[1][3] + taulukko[1][4];
    taulukko[2][5] = taulukko[2][0] + taulukko[2][1] + taulukko[2][2] + taulukko[2][3] + taulukko[2][4];
    taulukko[3][0] = taulukko[0][0] + taulukko[1][0] + taulukko[2][0] + taulukko[3][0];
    taulukko[3][1] = taulukko[0][1] + taulukko[1][1] + taulukko[2][1] + taulukko[3][1];
    taulukko[3][2] = taulukko[0][2] + taulukko[1][2] + taulukko[2][2] + taulukko[3][2];
    taulukko[3][3] = taulukko[0][3] + taulukko[1][3] + taulukko[2][3] + taulukko[3][3];
    taulukko[3][4] = taulukko[0][4] + taulukko[1][4] + taulukko[2][4] + taulukko[3][4];
    taulukko[3][5] = taulukko[0][5] + taulukko[1][5] + taulukko[2][5] + taulukko[3][5];

    cout << "{" << taulukko[0][0] << " " << taulukko[0][1] << " " << taulukko[0][2] << " ";
    cout << taulukko[0][3] << " " << taulukko[0][4] << " " << taulukko[0][5] << "}" << endl;
    cout << "{" << taulukko[1][0] << " " << taulukko[1][1] << " " << taulukko[1][2] << " ";
    cout << taulukko[1][3] << " " << taulukko[1][4] << " " << taulukko[1][5] << "}" << endl;
    cout << "{" << taulukko[2][0] << " " << taulukko[2][1] << " " << taulukko[2][2] << " ";
    cout << taulukko[2][3] << " " << taulukko[2][4] << " " << taulukko[2][5] << "}" << endl;
    cout << "{" << taulukko[3][0] << " " << taulukko[3][1] << " " << taulukko[3][2] << " ";
    cout << taulukko[3][3] << " " << taulukko[3][4] << " " << taulukko[3][5] << "}" << endl;

    return 0;
}
