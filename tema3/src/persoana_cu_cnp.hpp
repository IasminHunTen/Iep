#ifndef PERSOANA_CU_CNP_H
#define PERSOANA_CU_CNP_H

#include "persoana.hpp"

class Persoana_cu_cnp:Persoana{
    public:
        Persoana_cu_cnp(std::string, std::string);
        ~Persoana_cu_cnp();
    private:
        std::string theCnp;
};


#endif