

#ifndef INC_4_UZDUOTIS_MENIU_H
#define INC_4_UZDUOTIS_MENIU_H
#include<iostream>
#include<vector>
#include "Darbuotojas.h"
#include "Lankytojas.h"

using namespace std;

class Meniu {
private:
    vector<Meniu> sarasas;
    string pavadinimas;
    double kaina;
    double pirkimoKaina;
    int prekiuSk;

public:
    void sukurkmeniu();
    void Getsarasas();
    void SetPrice();
    void PirkimoKaina();
    void SetName();
    void prekiuInfo();
    void prekiuUzsakymas();
    void paruostiValgi(int pasirinkimas, int pinigas);


};


#endif //INC_4_UZDUOTIS_MENIU_H
