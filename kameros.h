//
// Created by Aleksej on 12/16/2021.
//

#ifndef KONTROLINIS_KAMEROS_H
#define KONTROLINIS_KAMEROS_H

#include <iostream>

class kameros {
public:
    void addKameras();
    std::string getKameras();
    void IjunkKameras();
    void IsjunkKameras();
    void AtsukVaizda();
    void DabartinisVaizdas();

private:
    std::string Kameros;
    std::string busena;
};


#endif //KONTROLINIS_KAMEROS_H
