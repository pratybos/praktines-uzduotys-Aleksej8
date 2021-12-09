

#ifndef CLASSUZDUOTIS_RAJONAS_H
#define CLASSUZDUOTIS_RAJONAS_H

#include <iostream>
#include "Vietovarde.h"


class Rajonas : public Vietovarde{
private:
    std::string pavadinimas;
    int zmoniuSK;

public:

    void informacija();
    int zmoniuSkaicius();
    std::string getPavadinimas();

    Rajonas(const std::string &vardas, int zmoniuKiekis);

};


#endif //CLASSUZDUOTIS_RAJONAS_H
