#include "semnalizare.hpp"

Semnalizare::Semnalizare(const int blink):theBlink(blink){}
Semnalizare& Semnalizare::operator=(Semnalizare alta){
    std::swap(theBlink, alta.theBlink);
    return *this;
}
int Semnalizare::getBlink(){
    return theBlink;
}
