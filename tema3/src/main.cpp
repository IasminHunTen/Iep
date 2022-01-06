#include "persoana_cu_cnp.hpp"
#include <memory>

void prove_unique_pointer(){
    std::make_unique<Persoana_cu_cnp>(Persoana_cu_cnp("Iasmin", "1990702123456"));
}

void prove_shered_pointer(){
    std::shared_ptr<Persoana> Iasmin = std::make_shared<Persoana>(Persoana("Larisa"));
    std::shared_ptr<Persoana> Ionut = Iasmin;
    std::cout<<"Larisa are "<<Ionut.use_count()<<" \"prieteni\"\n";
}



void prove_weak_Pointer(){
    std::shared_ptr<Persoana> Iasmin = std::make_shared<Persoana>(Persoana("Larisa"));
    std::shared_ptr<Persoana> Ionut = Iasmin;
    std::weak_ptr<Persoana> Cetatean_al_judetului_Arad = Ionut;
    std::cout<<"Larisa are "<<Cetatean_al_judetului_Arad.use_count()<<" \"prieteni\"\n";

}

int main(){
    std::cout<<"                          UNIQUE SCOUPE\n\n";
    prove_unique_pointer();
    std::cout<<"                              END";
    std::cout<<"\n\n\n";

    std::cout<<"                          SHARED SCOUPE\n\n";
    prove_shered_pointer();
    std::cout<<"                              END";
    std::cout<<"\n\n\n";

    std::cout<<"                          WEAK SCOUPE\n\n";
    prove_weak_Pointer();
    std::cout<<"                              END";
    std::cout<<"\n\n\n";
    
    return 0;
}