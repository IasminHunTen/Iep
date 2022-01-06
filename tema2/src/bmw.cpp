#include "bmw.hpp"

BMW::BMW(const int horses, const int year, const std::string color):
    theHorses(horses),
    theYear(year),
    theColor(color){}

BMW& BMW::operator=(BMW altu){
    std::swap(theHorses, altu.theHorses);
    std::swap(theYear, altu.theYear);
    std::swap(theColor, altu.theColor);
    return *this;
}

std::string BMW::toString(){
    return "putere: " + std::to_string(theHorses) + " cai frumosi\n"+
    "an: " + std::to_string(theYear) + "\n"+
    "culoare: "+ theColor+ "\n";   
}