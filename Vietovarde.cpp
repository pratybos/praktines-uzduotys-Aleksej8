

#include "Vietovarde.h"

Vietovarde::Vietovarde(const std::string &vardas) : pavadinimas(vardas), zmoniuSk(0) {
}

Vietovarde::Vietovarde(const std::string &vardas, int zmoniusk) : pavadinimas(vardas), zmoniuSk(zmoniusk){
}

std::string Vietovarde::getPavadinimas() {
    return pavadinimas;
}

void Vietovarde::getZmoniuskaicius() {
    if(zmoniuSk == -1) std::cout<<"Vietovardes "<<getPavadinimas()<<" gyventoju skaicius nenurodytas"<<std::endl;
    else std::cout<<"Vietovardes "<<getPavadinimas()<<" gyventoju skaicius yra "<<zmoniuSk<<std::endl;
}


void Vietovarde::prideti(Vietovarde *vietovarde) {
    vietovardes.push_back(vietovarde);
}



int IsViso = 0;

int Vietovarde::zmoniuSkaicius() {
    if(zmoniuSk == -1) IsViso = IsViso + 1;
    IsViso = IsViso + zmoniuSk;

    for (Vietovarde* temp: vietovardes) {
        temp->zmoniuSkaicius();
    }
    return IsViso;
}

void Vietovarde::informacija() {
    IsViso = 0;
    std::cout<<pavadinimas<<" turi maziausiai  "<<zmoniuSkaicius()<<" gyventojus ir siai vietovardei priklauso: "<<std::endl;

    for (Vietovarde* temp: vietovardes) {
       std::cout<<temp->pavadinimas<<std::endl;
       //temp->informacija();
   }
    IsViso = 0;
}




