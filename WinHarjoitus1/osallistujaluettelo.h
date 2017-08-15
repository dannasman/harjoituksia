#ifndef OSALLISTUJALUETTELO_H
#define OSALLISTUJALUETTELO_H
#include "henkilo.h"


class Osallistujaluettelo
{
    Henkilo Etunimi;
    Henkilo Sukunimi;
    char kurssi[15] = "Matematiikka";
public:
    Osallistujaluettelo();
    Osallistujaluettelo(const char[], const char[]);
    void Kysy();
    void Nayta();
    ~Osallistujaluettelo();
};

#endif // OSALLISTUJALUETTELO_H
