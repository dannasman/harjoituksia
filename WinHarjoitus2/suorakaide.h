#ifndef SUORAKAIDE_H
#define SUORAKAIDE_H


class SuoraKaide
{
    float sivu1;
    float sivu2;
    float ala;
    static float keskiarvo;
    static int lkm;
    static SuoraKaide *alat[10];
public:
    SuoraKaide(){sivu1 = 0; sivu2 = 0; lkm++;}
    ~SuoraKaide(){sivu1 = 0; sivu2 = 0;}
    void Kysy();
    static int Lisaa();
    static void Keskiarvo();
    static void Tuhoa();
};

#endif // SUORAKAIDE_H
