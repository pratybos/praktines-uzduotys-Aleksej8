
#ifndef INC_4_UZDUOTIS_LANKYTOJAS_H
#define INC_4_UZDUOTIS_LANKYTOJAS_H
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Lankytojas {
private:
    int pageidavimas;
    int pinigas;
public:
    void Pasirinkimas(int &number);
    void pinigai(int &pinigai);
};


#endif //INC_4_UZDUOTIS_LANKYTOJAS_H
