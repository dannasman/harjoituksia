#ifndef HENKILO_H
#define HENKILO_H
#include <iostream>

class Henkilo
{
    char *nimi;
public:
    Henkilo() {nimi = NULL;}
    Henkilo(const char[]);
    void Nayta();
    ~Henkilo();
};

#endif // HENKILO_H
