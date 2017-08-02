#include <iostream>
using namespace std;
#include <fstream>
#include <cctype>

struct PUH
{
    char nmro[15];
    char etu[15];
    char suku[15];
};

int KysyValinta();

int main()
{
    PUH kontakti, sukunimi, sukunimi2, uusi;
    fstream lista;
    int vastaus;
    lista.open("/home/dannasman/Documents/C++/Harjoitus29/lista.dat",
               ios_base::in | ios_base::out | ios_base::binary);
    lista.seekg(0);
    streampos alku = lista.tellg();
    vastaus = KysyValinta();
    while(vastaus)
    {
        switch(vastaus)
        {
        case 1: lista.open("/home/dannasman/Documents/C++/Harjoitus29/lista.dat",
                           ios_base::out | ios_base::binary);
            lista.close();
            lista.open("/home/dannasman/Documents/C++/Harjoitus29/lista.dat",
                       ios_base::in | ios_base :: out | ios_base::binary);
            alku = lista.tellg();
            break;
        case 2: if(!lista.is_open())
            {
                cout << "Luo lista ensin" << endl;
                break;
            }
            lista.clear();
            lista.seekp(0, ios_base::end);
            cout << "Syötä puhelinnumero, etunimi ja sukunimi" << endl;
            while(cin >> kontakti.nmro >> kontakti.etu >> kontakti.suku)
            {
                lista.write(kontakti.nmro, sizeof kontakti.nmro);
                lista.write(kontakti.etu, sizeof kontakti.etu);
                lista.write(kontakti.suku, sizeof kontakti.suku);
                break;
            }
            cin.clear();
            break;
        case 3: if(!lista.is_open())
            {
                cout << "Luo lista ensin" << endl;
                break;
            }
            lista.clear();
            lista.seekg(0);
            cout << "Kontaktit alusta lähtien: " << endl;
            while(lista.read(kontakti.nmro, sizeof kontakti.nmro) && lista.read(kontakti.etu, sizeof kontakti.etu) &&
                  lista.read(kontakti.suku, sizeof kontakti.suku) && !lista.eof())
                cout << kontakti.nmro << " " << kontakti.etu << " " << kontakti.suku << endl;
            break;
        case 4: if(!lista.is_open())
            {
                cout << "Luo lista ensin" << endl;
                break;
            }
            lista.clear();
            lista.seekg(-(1 * sizeof kontakti), ios_base::end);
            while(!lista.tellg() == alku)
            {
                lista.read(kontakti.nmro, sizeof kontakti.nmro);
                lista.read(kontakti.etu, sizeof kontakti.etu);
                lista.read(kontakti.suku, sizeof kontakti.suku);
                cout << kontakti.nmro << " " << kontakti.etu << " " << kontakti.suku << endl;
                lista.seekg(-(2 * sizeof  kontakti), ios_base::cur);
            }
            lista.read(kontakti.nmro, sizeof kontakti.nmro);
            lista.read(kontakti.etu, sizeof kontakti.etu);
            lista.read(kontakti.suku, sizeof kontakti.suku);
            cout << kontakti.nmro << " " << kontakti.etu << " " << kontakti.suku << endl;
            break;
        case 5: if(!lista.is_open())
            {
                cout << "Luo lista ensin" << endl;
                break;
            }
            lista.clear();
            lista.seekg(-(1 * sizeof kontakti), ios_base::end);
            cout << "Syötä sukunimi: " << endl;
            cin >> sukunimi.suku;

            while(!lista.tellg() == alku)
            {
                lista.read(kontakti.nmro, sizeof kontakti.nmro);
                lista.read(kontakti.etu, sizeof kontakti.etu);
                lista.read(kontakti.suku, sizeof kontakti.suku);
                if(*kontakti.suku == *sukunimi.suku)
                {
                    cout << kontakti.nmro << " " << kontakti.etu << " " << kontakti.suku << endl;
                    break;
                }
                lista.seekg(-(2 * sizeof kontakti), ios_base::cur);
            }
            if(*kontakti.suku != *sukunimi.suku)
                cout << "Sukunimeä ei löytynyt" << endl;
            break;
        case 6: if(!lista.is_open())
            {
                cout << "Luo lista ensin" << endl;
                break;
            }
            lista.clear();
            lista.seekg((1 * sizeof kontakti), ios_base::beg);
            cout << "Syötä numeroa vaihdettavan henkilön sukunimi:" << endl;
            cin >> sukunimi2.suku;
            while(!lista.eof())
            {
                lista.read(kontakti.nmro, sizeof kontakti.nmro);
                lista.read(kontakti.etu, sizeof kontakti.etu);
                lista.read(kontakti.suku, sizeof kontakti.suku);
                if(*kontakti.suku == *sukunimi2.suku)
                {
                    cout << "Syötä uusi puhelinnumero: " << endl;
                    cin >> uusi.nmro;
                    lista.write(uusi.nmro, sizeof uusi.nmro);
                    lista.write(kontakti.etu, sizeof kontakti.etu);
                    lista.write(kontakti.suku, sizeof kontakti.suku);
                    break;
                }
                lista.seekg((2 * sizeof kontakti), ios_base::cur);
            }

        }
        vastaus = KysyValinta();
    }
    lista.close();
    return 0;
}


int KysyValinta()
{
    int valinta;
    cout << "\nVALIKKO" << endl;
    cout << "1) Luo lista" << endl;
    cout << "2) Lisää uusi numero" << endl;
    cout << "3) Selaa numeroita alusta lähtien" << endl;
    cout << "4) Selaa numeroita lopusta lähtien" << endl;
    cout << "5) Etsi sukunimen perusteella" << endl;
    cout << "6) Vaihda henkilön numero" << endl;
    cout << "0) Lopetus" << endl;
    cin >> valinta;
    return valinta;
}
