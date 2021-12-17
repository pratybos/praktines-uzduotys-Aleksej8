
#ifndef KONTROLINIS_PRIETAISAS_H
#define KONTROLINIS_PRIETAISAS_H

#include<iostream>

class prietaisas {
public:
    void addPrietaisa(int Prietaisas);
    void prietaisuSarasas();
    void BusenaIsjungta();
    void IjunkPrietaisa();
    void IsjungPrietaisa();
    void PakeistPrietaisa();
    void Ijungti_IsjungtiPrietaisai();


private:
    std::string pavadinimas[50];
    std::string PrietaisoBusena[50];
    int PrietaisuSkaicius = 0;
};


#endif //KONTROLINIS_PRIETAISAS_H
