#include <iostream>

using namespace std;

struct PVM
{
    int paiva, kuukausi, vuosi;
};
struct Alkio
{
    int luku1;
    int luku2;
    int luku3;
    Alkio *seuraava;
};

int LisaaPaiva(Alkio *&, int, int, int);
int PoistaPaiva(Alkio *&, int, int, int);

void NaytaEnsimmainen(Alkio *&);
void NaytaSeuraava(Alkio *&);

int KysyValinta();
int main()
{   
    PVM pp, kk, vv;
    Alkio *alku = NULL;
    int vastaus, ok;
    vastaus = KysyValinta();
    while(vastaus != 0)
    {
        switch(vastaus)
        {
        case 1: cout << "Syötä uusi päivämäärä(pp kk vv): " << endl;
            cin >> pp.paiva;
            cin >> kk.kuukausi;
            cin >> vv.vuosi;
            ok = LisaaPaiva(alku, pp.paiva, kk.kuukausi, vv.vuosi);
            if(ok == 0)
                cout << "\nTilanvaraus epäonnistui, päivämäärää ei lisätty" << endl;
            break;
        case 2: NaytaEnsimmainen(alku);
            break;
        case 3: NaytaSeuraava(alku);
            break;
        case 4: cout << "Poistettava päivämäärä: " << endl;
            cin >> pp.paiva;
            cin >> kk.kuukausi;
            cin >> vv.vuosi;
            ok = PoistaPaiva(alku, pp.paiva, kk.kuukausi, vv.vuosi);
            if(ok == 0)
                cout << "Poistettavaa päivämäärää ei löytynyt" << endl;
            break;
        }
        vastaus = KysyValinta();
    }
    Alkio *seuraava;
    Alkio *kohdalla = alku;
    while(kohdalla)
    {
        seuraava = kohdalla->seuraava;
        delete kohdalla;
        kohdalla = seuraava;
    }
    return 0;
}
int KysyValinta()
{
    int valinta;
    cout << "\nPÄIVÄMÄÄRIEN KÄSITTELY";
    cout << "\n1) Lisää uusi päivämäärä";
    cout << "\n2) Näytä ensimmäinen päivämäärä";
    cout << "\n3) Näytä seuraava päivämäärä";
    cout << "\n4) Poista kohdalla oleva päivämäärä";
    cout << "\n0) Lopetus" << endl;
    cin >> valinta;
    return valinta;
}
int LisaaPaiva(Alkio *&p_alku, int paiva,  int kuukausi, int vuosi)
{
    Alkio *uusi = new Alkio;
    if(uusi)
    {
        uusi->luku1 = paiva;
        uusi->luku2 = kuukausi;
        uusi->luku3 = vuosi;
        uusi->seuraava = NULL;
        Alkio *kohdalla;
        if(!p_alku)
            p_alku = uusi;
        else
        {
            kohdalla = p_alku;
            while(kohdalla->seuraava)
                kohdalla = kohdalla->seuraava;
            kohdalla->seuraava = uusi;
        }
        return 1;
    }
    else
        return 0;
}
void NaytaEnsimmainen(Alkio *&p_alku)
{
    Alkio *kohdalla;
    kohdalla = p_alku;
    cout << kohdalla->luku1 << "." << kohdalla->luku2 << "." << kohdalla->luku3 << endl;
}
void NaytaSeuraava(Alkio *&p_alku)
{
    Alkio *kohdalla;
    kohdalla = p_alku;
    kohdalla = kohdalla->seuraava;
    cout << kohdalla->luku1 << "." << kohdalla->luku2 << "." << kohdalla->luku3 << endl;
    p_alku = kohdalla;
}
int PoistaPaiva(Alkio *&p_alku, int p_paiva, int p_kuukausi, int p_vuosi)
{
    Alkio *edellinen = NULL;;
    Alkio *pois = p_alku;
    while(pois != NULL && pois->luku1 != p_paiva && pois->luku2 != p_kuukausi && pois->luku3 != p_vuosi)
    {
        edellinen = pois;
        pois = pois->seuraava;
    }
    if(pois == NULL)
        return 0;
    else
    {
        if(pois == p_alku)
            p_alku = pois->seuraava;
        else
            edellinen->seuraava =
                    pois->seuraava;
        delete pois;
        return 1;
    }
}
