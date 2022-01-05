

#ifndef INC_4_UZDUOTIS_DARBUOTOJAS_H
#define INC_4_UZDUOTIS_DARBUOTOJAS_H
#include<iostream>
#include<vector>

using namespace std;

class Darbuotojas {
private:
    vector<Darbuotojas> darbuotojai;
    string role;
    string vardas;

public:
    void sukurkDarbuotoja();
    void paskirstik();
    void GetDarbuotojai();
};


#endif //INC_4_UZDUOTIS_DARBUOTOJAS_H
