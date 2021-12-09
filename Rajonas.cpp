

#include "Rajonas.h"

Rajonas::Rajonas(const std::string &vardas, int zmoniuKiekis) : Vietovarde(vardas, zmoniuKiekis), pavadinimas(vardas), zmoniuSK(zmoniuKiekis) {}

std::string Rajonas::getPavadinimas() {
    return pavadinimas;
}

void Rajonas::informacija() {
    std::cout<<pavadinimas<<" turi maziausiai "<<zmoniuSK<<" gyventojus"<<std::endl;
}

int Rajonas::zmoniuSkaicius() {
    return zmoniuSK;
}



