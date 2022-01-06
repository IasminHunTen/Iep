#include <iostream>
#ifndef BMW_H
#define BMW_H


class BMW{
    public:
        BMW();
        BMW(const int, const int, const std::string);
        std::string toString();
        BMW& operator=(BMW);
    protected:
        int theHorses;
        int theYear;
        std::string theColor;
    
};

#endif 