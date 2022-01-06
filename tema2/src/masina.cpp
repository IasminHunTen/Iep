#include "masina.hpp"
#include "bmw.hpp"
Masina::Masina(const int horses, const int year, const std::string color,
                    const Semnalizare semnalizare, const std::string brand):
                    BMW(horses, year, color),
                    theSemnalizare(semnalizare),
                    theBrand(brand){}
Masina& Masina::operator=(Masina alta){
    BMW::operator=(alta);
    std::swap(theSemnalizare, alta.theSemnalizare);
    std::swap(theBrand,alta.theBrand);
    return *this;
}

std::string Masina::toString(){
    return BMW::toString()+
    "semnalizare cu perioada de: " + std::to_string(theSemnalizare.getBlink())+ " milisecude"+
    "model: " + theBrand + "\n";
}