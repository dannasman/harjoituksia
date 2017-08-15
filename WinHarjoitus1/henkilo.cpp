#include "henkilo.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
Henkilo::Henkilo(const char p_nimi[])
{
    int pituus = strlen(p_nimi) + 1;
    nimi = new char[pituus];
    strcpy(nimi, p_nimi);
}
void Henkilo::Nayta()
{
    if(nimi) cout << nimi;
}
Henkilo::~Henkilo()
{
    delete [] nimi;
    nimi = NULL;
}
