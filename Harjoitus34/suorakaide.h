#ifndef SUORAKAIDE_H
#define SUORAKAIDE_H


class SuoraKaide
{
    float sivu1;
    float sivu2;
public:
    void Alusta(float p_sivu1, float p_sivu2){sivu1 = p_sivu1; sivu2 = p_sivu2;}
    float PintaAla() const;
};

#endif // SUORAKAIDE_H
