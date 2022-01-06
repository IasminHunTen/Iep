
#include "masina.hpp"
#include "bmw.hpp"

int main(){
    BMW bmw(300, 2028, "gri");
    Masina audi(301, 2021, "negru", Semnalizare(2000), "Audi");
    bmw=bmw;
    std::cout << bmw.toString() << std::endl;
    Masina other_audi, another_audi;
    another_audi = other_audi = audi;
    std::cout << other_audi.toString() << std::endl;
    return 0;
}