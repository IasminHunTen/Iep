#include "persoana_cu_cnp.hpp"

Persoana_cu_cnp::Persoana_cu_cnp(std::string name, std::string cnp)
    :Persoana(name), theCnp(cnp)
    {std::cout<<name<<" , cu cnp: "<<cnp<<" s-a nscuct\n";}

Persoana_cu_cnp::~Persoana_cu_cnp(){
    std::cout<<theName<<" , cu cnp: "<<theCnp<<" s-a inscris la poli\n";
}