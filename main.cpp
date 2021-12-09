#include <iostream>
#include "Vietovarde.h"
#include "Rajonas.h"


void rajonoDuomenys(int &GyvSkaicius, std::string &temp){
    std::cout<<std::endl;
    std::cout << "-----Sukurkite rajona kuris priklausytu siam miestui----"<<std::endl;
    std::cout << " *Iveskite rajono pavadinima: ";
    std::cin >> temp;
    std::cout << "*Iveskite gyventoju kieki siame rajone: ";
    std::cin >> GyvSkaicius;
    std::cout<<std::endl;
}

void miestoDuomenys(int &b, int &GyvSkaicius, std::string &temp) {
        std::cout << "----Sukurkite nauja miesta (" << b << ")----" << std::endl;
        b = b - 1;
        std::cout << " *Iveskite miesto pavadinima: ";
        std::cin >> temp;
        std::cout << "*Iveskite miesto " << temp << " gyventoju skaiciu (jeigu nebutinas iveskite -1): ";
        std::cin >> GyvSkaicius;
}


int main(){



   std::string temp;

   std::cout<<"*Sukurkite nauja sali: ";
   std::cin>>temp;
   std::cout<<std::endl;

   Vietovarde *Salis = new Vietovarde(temp);

   int b=2;
   int GyvSkaicius;

    miestoDuomenys(b, GyvSkaicius, temp);

    Vietovarde *miestas1 = new Vietovarde(temp, GyvSkaicius);
    Salis->prideti(miestas1);

    rajonoDuomenys(GyvSkaicius, temp);
    Rajonas *rajonas1 = new Rajonas(temp, GyvSkaicius);

    miestas1->prideti(rajonas1);


    miestoDuomenys(b, GyvSkaicius, temp);

    Vietovarde *miestas2 = new Vietovarde(temp, GyvSkaicius);
    Salis->prideti(miestas2);

    rajonoDuomenys(GyvSkaicius, temp);
    Rajonas *rajonas2 = new Rajonas(temp, GyvSkaicius);

    miestas2->prideti(rajonas2);


    std::cout<<"*Pasirinkite viena is punktu"<<std::endl;

    int a=1;
    while (a>0){
    std::cout<<"1 - Salies informacija "<<std::endl;
    std::cout<<"2 - Miestu informacija "<<std::endl;
    std::cout<<"3 - Ivestas miestu gyventoju skaicius "<<std::endl;
    std::cout<<"4 - Rajonu zmoniu kiekis "<<std::endl;
    std::cout<<"0 - Sustabdyti programa "<<std::endl;
    std::cin>>b;
    switch (b) {
        case 1:
            Salis->informacija();
            std::cout<<std::endl;
            break;
        case 2:
            miestas1->informacija();
            std::cout<<std::endl;
            miestas2->informacija();
            std::cout<<std::endl;
            break;
        case 3:
            miestas1->getZmoniuskaicius();
            std::cout<<std::endl;
            miestas2->getZmoniuskaicius();
            std::cout<<std::endl;
            break;
        case 4:
            rajonas1->informacija();
            std::cout<<std::endl;
            rajonas2->informacija();
            std::cout<<std::endl;
            break;
        case 0:
            a=0;
       }
    }

   return 0;
}

