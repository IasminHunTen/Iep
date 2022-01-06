#include <iostream>
#ifndef SEMNALIZARE_H
#define SEMNALIZARE_H

class Semnalizare{
    public:
        Semnalizare();
        Semnalizare(const int);
        ~Semnalizare()=default;
        int getBlink();
        Semnalizare& operator=(Semnalizare alta);
    private:
        int theBlink;
};
#endif
