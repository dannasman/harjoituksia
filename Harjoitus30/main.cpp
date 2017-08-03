#include <iostream>
#include <fstream>

using namespace std;
struct PUH
{
    char nmro[15];
    char etu[15];
    char suku[15];
};

int main()
{
    PUH tietue;
    ifstream syotto("/home/dannasman/Documents/C++/Harjoitus29/lista.dat", ios_base::binary);
    if(syotto.is_open())
    {
        ofstream tulos("/home/dannasman/Documents/C++/Harjoitus30/lista.txt");
        tulos << "PUHELINLUETTELO\n";
        syotto.read(tietue.nmro, sizeof tietue.nmro);
        syotto.read(tietue.etu, sizeof tietue.etu);
        syotto.read(tietue.suku, sizeof tietue.suku);
        while(!syotto.eof())
        {
            tulos << tietue.nmro << "\n";
            tulos << tietue.etu << " " << tietue.suku << "\n";
            syotto.read(tietue.nmro, sizeof tietue.nmro);
            syotto.read(tietue.etu, sizeof tietue.etu);
            syotto.read(tietue.suku, sizeof tietue.suku);
        }
        tulos.close();
        syotto.close();

    }
    return 0;
}
