//
// Created by Aleksej on 12/16/2021.
//

#ifndef KONTROLINIS_MUZIKA_H
#define KONTROLINIS_MUZIKA_H

#include <iostream>

class muzika {
public:
    void addMuzika();
    std::string getMuzika();
    void IjunkMuzika();
    void IsjunkMuzika();
    void Pagarsink_patildik();
    void PakeiskMuzika();
    void Informacija();

private:
    std::string Muzika;
    std::string MuzikosPavadinimas = "nepasirinkta";
    std::string busena;
    int garsas;
};


#endif //KONTROLINIS_MUZIKA_H
