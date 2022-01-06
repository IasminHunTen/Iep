#ifndef MASINA_H
#define MASINE_H

#include "semnalizare.hpp"
#include "bmw.hpp"

class Masina: public BMW{
    public:
        Masina();
        Masina(const int, const int, const std::string,
                    const Semnalizare, const std::string);
        Masina& operator=(Masina);
        std::string toString();
    private:
        Semnalizare theSemnalizare;
        std::string theBrand;
    
};
#endif