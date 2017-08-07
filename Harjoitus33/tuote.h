#ifndef TUOTE_H
#define TUOTE_H
#include <string>
class Tuote
{
    char nimike[10];
    char kappalehinta[10];
    std::string varastomaara;
public:
    void Kysy();
    void Nayta();
    bool VertaaNimike(char*);
    bool Muuta(int);
};

#endif // TUOTE_H
