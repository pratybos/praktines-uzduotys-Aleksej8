//
// Created by Aleksej on 12/16/2021.
//

#ifndef KONTROLINIS_SILDYMAS_H
#define KONTROLINIS_SILDYMAS_H

#include <iostream>

class sildymas {
public:
    void addSildymas();
    std::string getSildymas();
    void IjunkSildyma();
    void IsjunkSildyma();
    void NustatykTemperatura();
    void getInformation();

private:
    std::string Sildymas;
    std::string busena;
    int laipsniai;
};


#endif //KONTROLINIS_SILDYMAS_H
