//
// Created by Aleksej on 12/16/2021.
//

#include "sildymas.h"

void sildymas::addSildymas() {
    std::string temp;
    std::cout<<std::endl;
    std::cout <<"*Ar noresite prideti ismanuji sildyma? (taip/ne)"<< std::endl;
    std::cin>>temp;

    if (temp == "taip") {std::cout <<"*Sildymas pridetas"<< std::endl; busena = "Isjungtas"; std::cout<<std::endl;}
    Sildymas = temp;
}

std::string sildymas::getSildymas() {
    return Sildymas;
}

void sildymas::IjunkSildyma() {
    if(busena == "Ijungtas") std::cout<<"Sildymas buvo ijungtas"<<std::endl;
    else {busena = "Ijungtas"; std::cout<<"Sildymas sekmingai ijungtas!"<<std::endl; laipsniai = 18;}
}

void sildymas::IsjunkSildyma() {
    if(busena == "Isjungtas") std::cout<<"Sildymas buvo isjungtas"<<std::endl;
    else {busena = "Isjungtas"; std::cout<<"Sildymas sekmingai isjungtas!"<<std::endl;}
}

void sildymas::NustatykTemperatura() {
    if(busena == "Isjungtas") std::cout<<"Prasome ijungti sildyma noredami nustatyti temperatura"<<std::endl;
    else {
        std::cout<<"Kokia temperatura pageidaujate?"<<std::endl;
        std::cin>>laipsniai;
        std::cout<<"Temperatura nustatyta "<<laipsniai<<" laipsniu"<<std::endl;
    }
}

void sildymas::getInformation() {
   if (Sildymas == "taip") {
       if (busena == "Isjungtas") std::cout << "Sildymas isjungtas" << std::endl;
       else {
           std::cout << "Ijungtas, temperatura " << laipsniai << " laipsniu" << std::endl;
       }
   }
   else std::cout<<"Sildymas nepajungtas"<<std::endl;
}