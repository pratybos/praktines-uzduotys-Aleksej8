//
// Created by Aleksej on 12/16/2021.
//

#include "muzika.h"

void muzika::addMuzika() {
    std::string temp;
    std::cout<<std::endl;
    std::cout <<"*Ar noresite prideti muzikos grotuva? (taip/ne)"<< std::endl;
    std::cin>>temp;
    if (temp == "taip") {std::cout <<"*Grotuvas pridetas"<< std::endl; busena = "Isjungtas"; std::cout<<std::endl;}
    Muzika = temp;
}

std::string muzika::getMuzika() {
    return Muzika;
}

void muzika::IjunkMuzika() {
    if(busena == "Ijungtas") std::cout<<"Grotuvas buvo ijungtas"<<std::endl;
    else {busena = "Ijungtas"; std::cout<<"Grotuvas sekmingai ijungtas!"<<std::endl; garsas = 0;}
}

void muzika::IsjunkMuzika() {
    if(busena == "Isjungtas") std::cout<<"Grotuvas buvo isjungtas"<<std::endl;
    else {busena = "Isjungtas"; std::cout<<"Grotuvas sekmingai isjungtas!"<<std::endl;}
}

void muzika::Pagarsink_patildik() {
    int temp;
    if(busena == "Isjungtas") std::cout<<"Pirma ijunkite grotuva"<<std::endl;
    else {
        std::cout<<"Iveskite garso skaiciu, intervalas [0-100]"<<std::endl;
        std::cin>>temp;
        garsas = temp;
    }
}

void muzika::PakeiskMuzika() {
    if(busena == "Isjungtas") std::cout<<"Pirma ijunkite grotuva"<<std::endl;
    else {
        std::cout << "Iveskite norimos muzikos pavadinima" << std::endl;
        std::cin >> MuzikosPavadinimas;
        std::cout << "Muzika groja!"<<std::endl;
    }
}

void muzika::Informacija() {
        std::cout << "Grotuvas " << busena << std::endl;
        if (busena == "Ijungtas") {
            std::cout << "Muzika - " << MuzikosPavadinimas << std::endl;
            std::cout << "Garsas yra nustatytas " << garsas << std::endl;
        }
}
