//
// Created by Aleksej on 12/15/2021.
//

#include "prietaisas.h"

void prietaisas::addPrietaisa(int Prietaisas) {
    std::cout<<std::endl;
    std::cout <<"*Iveskite prietaiso pavadinima"<< std::endl;
    std::cin >> pavadinimas[Prietaisas];
    PrietaisuSkaicius = PrietaisuSkaicius + 1;
}



void prietaisas::prietaisuSarasas() {
    for (int i=0; i<PrietaisuSkaicius; i++){
        std::cout<<i + 1<<" - "<<pavadinimas[i]<<std::endl;
    }
}

void prietaisas::IjunkPrietaisa() {
    prietaisuSarasas();
    int numeris;
    std::cout<<"Pasirinkite prietaiso numeri noredami ji ijungti"<<std::endl;
    std::cin>>numeris;
    if (PrietaisoBusena[numeris-1] == "Ijungtas") {std::cout<<"Prietaisas '"<<pavadinimas[numeris-1]<<"' jau buvo ijungtas"<<std::endl; std::cout<<std::endl;}
    else {PrietaisoBusena[numeris-1] = "Ijungtas"; std::cout<<"Prietaisas '"<<pavadinimas[numeris-1]<<"' sekmingai ijungtas!"<<std::endl; std::cout<<std::endl;}
}

void prietaisas::BusenaIsjungta() {
    for (int i=0; i<PrietaisuSkaicius; i++){
        PrietaisoBusena[i] = "Isjungtas";
    }
}

void prietaisas::IsjungPrietaisa() {
    prietaisuSarasas();
    int numeris;
    std::cout<<"Pasirinkite prietaiso numeri noredami ji isjungti"<<std::endl;
    std::cin>>numeris;
    if (PrietaisoBusena[numeris-1] == "Isjungtas") {std::cout<<"Prietaisas '"<<pavadinimas[numeris-1]<<"' jau buvo isjungtas"<<std::endl; std::cout<<std::endl;}
    else {PrietaisoBusena[numeris-1] = "Isjungtas"; std::cout<<"Prietaisas '"<<pavadinimas[numeris-1]<<"' sekmingai isjungtas!"<<std::endl; std::cout<<std::endl;}
}

void prietaisas::PakeistPrietaisa() {
    prietaisuSarasas();
    int numeris;
    std::cout<<"Pasirinkite prietaiso numeri noredami ji pakeisti kitu"<<std::endl;
    std::cin>>numeris;
    addPrietaisa(numeris-1);
    PrietaisuSkaicius = PrietaisuSkaicius - 1;
}

void prietaisas::Ijungti_IsjungtiPrietaisai() {
    for(int i=0; i<PrietaisuSkaicius; i++){
            std::cout<<i + 1<<" - "<<pavadinimas[i]<<"   Busena: "<<PrietaisoBusena[i]<<std::endl;

    }
}
