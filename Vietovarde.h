

#ifndef CLASSUZDUOTIS_VIETOVARDE_H
#define CLASSUZDUOTIS_VIETOVARDE_H

#include <iostream>
#include <vector>


class Vietovarde {
private:
    std::string pavadinimas;
    std::vector<Vietovarde*> vietovardes;
    int zmoniuSk;
public:
    int zmoniuSkaicius();
    void informacija();
    std::string getPavadinimas();
    void getZmoniuskaicius();


    void prideti(Vietovarde *vietovarde);
    Vietovarde(const std::string &vardas);
    Vietovarde(const std::string &vardas, int zmoniusk);
};


#endif //CLASSUZDUOTIS_VIETOVARDE_H
