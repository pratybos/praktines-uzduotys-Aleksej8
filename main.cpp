//3 uzduotis

#include <iostream>
#include "prietaisas.h"
#include "sildymas.h"
#include "kameros.h"
#include "muzika.h"

prietaisas prietaisai;
sildymas Sildymas;
kameros Kameros;
muzika Muzika;

int prietaisuSkaicius;

void AutoMuzika(int temp){

    if (Muzika.getMuzika() == "taip") {
        std::cout << "----Muzikos parinktis----" << std::endl;
        while (temp > 0) {
            std::cout << "1 - Ijungti grotuva" << std::endl;
            std::cout << "2 - Isjungti grotuva"<< std::endl;
            std::cout << "3 - Pagarsinti/patilditi" << std::endl;
            std::cout << "4 - Pasirinkti muzika" << std::endl;
            std::cout << "5 - Informacija" << std::endl;
            std::cout << "0 - Gryzti atgal" << std::endl;
            std::cin >> temp;

            switch (temp) {
                case 1:
                    Muzika.IjunkMuzika();
                    break;
                case 2:
                    Muzika.IsjunkMuzika();
                    break;
                case 3:
                    Muzika.Pagarsink_patildik();
                    break;
                case 4:
                    Muzika.PakeiskMuzika();
                    break;
                case 5:
                    Muzika.Informacija();
                    std::cout << std::endl;
                    break;
                case 0:
                    temp = 0;
            }
        }
    }

    else {
        std::cout<<"Deja, bet muzikos grotuvas neinstaliuotas"<<std::endl;
        Muzika.addMuzika();
    }
}

void AutoKameros(int temp){

    if (Kameros.getKameras() == "taip") {
        std::cout << "----Kameru parinktis----" << std::endl;
        while (temp > 0) {
            std::cout << "1 - Ijungti kameras" << std::endl;
            std::cout << "2 - Isjungti kameras" << std::endl;
            std::cout << "3 - Atsukti kameras" << std::endl;
            std::cout << "4 - Dabartinis vaizdas" << std::endl;
            std::cout << "0 - Gryzti atgal" << std::endl;
            std::cin >> temp;

            switch (temp) {
                case 1:
                    Kameros.IjunkKameras();
                    break;
                case 2:
                    Kameros.IsjunkKameras();
                    break;
                case 3:
                    Kameros.AtsukVaizda();
                    break;
                case 4:
                    Kameros.DabartinisVaizdas();
                    std::cout << std::endl;
                    break;
                case 0:
                    temp = 0;
            }
        }
    }

    else {
        std::cout<<"Deja, bet kameros neinstaliuotos"<<std::endl;
        Kameros.addKameras();
    }
}

void AutoSildymas(int temp){

    if (Sildymas.getSildymas() == "taip") {
        std::cout << "----Sildymo parinktis----" << std::endl;
        while (temp > 0) {
            std::cout << "1 - Ijungti sildyma" << std::endl;
            std::cout << "2 - Isjungti sildyma" << std::endl;
            std::cout << "3 - Nustatyti norima temperatura" << std::endl;
            std::cout << "4 - Suzinoti dabartine temperatura" << std::endl;
            std::cout << "0 - Gryzti atgal" << std::endl;
            std::cin >> temp;

            switch (temp) {
                case 1:
                    Sildymas.IjunkSildyma();
                    break;
                case 2:
                    Sildymas.IsjunkSildyma();
                    break;
                case 3:
                    Sildymas.NustatykTemperatura();
                    break;
                case 4:
                    Sildymas.getInformation();
                    std::cout << std::endl;
                    break;
                case 0:
                    temp = 0;
            }
        }
    }

    else {
        std::cout<<"Deja, bet sildymas neinstaliuotas"<<std::endl;
        Sildymas.addSildymas();
    }
}

void Prietaisai(int temp){
    std::cout << "----Prietaisu parinktis----" << std::endl;
    while (temp>0){
        std::cout << "1 - Ijungti norima prietaisa" << std::endl;
        std::cout << "2 - Isjungti norima prietaisa" << std::endl;
        std::cout << "3 - Pakeisti prietaisa" << std::endl;
        std::cout << "4 - Prietaisu sarasas" << std::endl;
        std::cout << "0 - Gryzti atgal" << std::endl;
        std::cin>>temp;

        switch (temp) {
            case 1:
                prietaisai.IjunkPrietaisa();
                break;
            case 2:
                prietaisai.IsjungPrietaisa();
                break;
            case 3:
                prietaisai.PakeistPrietaisa();
                break;
            case 4:
                prietaisai.prietaisuSarasas();
                std::cout<<std::endl;
                break;
            case 0:
                temp = 0;
        }
    }
}

int main() {
    int parinktis=1, parinktis2=1;


    std::cout << std::endl;
    std::cout << "----Ismanieji namai----" << std::endl;

    std::cout << "Ismaniuosius namu sudaro:" << std::endl;
    std::cout << "*Ismanieji prietaisai" << std::endl;
    std::cout << "*Sildymas (nebutinas)" << std::endl;
    std::cout << "*Kameros (nebutinos)" << std::endl;
    std::cout << "*Muzika (nebutina)" << std::endl;

    std::cout << std::endl;

    std::cout << "----Prietaisai---- " << std::endl;
    std::cout << "*Kiek elektroniniu prietaisu planuojate prideti?"<<std::endl;
    std::cin >> prietaisuSkaicius;


    for (int i = 0; i < prietaisuSkaicius; i++) {
        prietaisai.addPrietaisa(i);
    }
    prietaisai.BusenaIsjungta();


    std::cout << "----Sildymas----" << std::endl;
    Sildymas.addSildymas();


    std::cout << "----Kameros----" << std::endl;
    Kameros.addKameras();


    std::cout << "----Muzika----" << std::endl;
    Muzika.addMuzika();

    std::cout << std::endl;
    std::cout << "----Ismanusis namas sukurtas----" << std::endl;

    while (parinktis > 0) {

    std::cout << "*Prasome pasirinkti viena is punktu:" << std::endl;
    std::cout << "1 - Prietaisu parinktis" << std::endl;
    std::cout << "2 - Sildymo parinktis" << std::endl;
    std::cout << "3 - Kameru pasirnkti" << std::endl;
    std::cout << "4 - Muzikos parinktis" << std::endl;
    std::cout << "5 - Ismaniojo namo apibendrinimas" << std::endl;
    std::cout << "0 - Baigti procesa" << std::endl;
    std::cin >> parinktis;
    std::cout << std::endl;

    switch (parinktis) {
        case 1:
            Prietaisai(parinktis2);
            break;
        case 2:
            AutoSildymas(parinktis2);
            break;
        case 3:
            AutoKameros(parinktis2);
            break;
        case 4:
            AutoMuzika(parinktis2);
            break;
        case 5:
            std::cout<<"----------------------------------------------------------"<<std::endl;
            std::cout<<"Visi prietaisai:"<<std::endl;
            prietaisai.Ijungti_IsjungtiPrietaisai();
            std::cout<<std::endl;
            std::cout<<"Sildymas:"<<std::endl;
            Sildymas.getInformation();
            std::cout<<std::endl;
            std::cout<<"Vaizdas, kuri transliuoja kameros:"<<std::endl;
            Kameros.DabartinisVaizdas();
            std::cout<<std::endl;
            Muzika.Informacija();
            std::cout<<"----------------------------------------------------------"<<std::endl;
            break;
        case 0:
            parinktis = 0;
            break;

    }

}
    return 0;
}
