//
// Created by Aleksej on 12/16/2021.
//

#include "kameros.h"

void kameros::addKameras() {
    std::string temp;
    std::cout<<std::endl;
    std::cout <<"*Ar noresite prideti kameras? (taip/ne)"<< std::endl;
    std::cin>>temp;
    if (temp == "taip"){std::cout <<"*Kameros pridetos"<< std::endl; busena = "Ijungtas"; std::cout<<std::endl;}
    Kameros = temp;
}

std::string kameros::getKameras() {
    return Kameros;
}

void kameros::IjunkKameras() {
    if(busena == "Ijungtas") std::cout<<"Kameros buvo ijungtos"<<std::endl;
    else {busena = "Ijungtas"; std::cout<<"Kameros sekmingai ijungtos!"<<std::endl;}
}

void kameros::IsjunkKameras() {
    if(busena == "Isjungtas") std::cout<<"Kameros buvo isjungtos"<<std::endl;
    else {busena = "Isjungtas"; std::cout<<"Kameros sekmingai isjungtos!"<<std::endl;}
}

void kameros::AtsukVaizda() {
    std::cout<<"**Nuo 8:20 iki 19:12 namai buvo tusti, 19:13 seimininkas gryzo namo**"<<std::endl;
}

void kameros::DabartinisVaizdas() {
        if (busena == "Ijungtas") {
            std::cout << "**Seimininkas sedi prie darbastalio, aplinkui viskas ramu**" << std::endl;
        } else std::cout << "Vaizdas isjungtas" << std::endl;
}
