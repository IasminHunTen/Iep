#include "persoana.hpp"

Persoana::Persoana(std::string name):theName(name){
    std::cout<<name<<" s-a nascut\n";
}

Persoana::~Persoana(){
    std::cout<<theName<<" s-a inscris la poli :((\n";
}

