#include <iostream>
#include "Meniu.h"


using namespace std;

int main() {
    cout<<"----Valgykla----\n"<<endl;

    Meniu meniu;
    meniu.sukurkmeniu();

    Darbuotojas darbuotojas;
    darbuotojas.sukurkDarbuotoja();

    cout<<"\nVlagykla yra sukurta\n"<<endl;
    cout<<"\nKadangi neturite prekiu, reikia jas uzsakyti:\n\n"<<endl;
    meniu.prekiuInfo();
    cout<<endl;
    meniu.prekiuUzsakymas();
    cout<<"\nValgykla paruosta darbui!\n"<<endl;
    int i=1;

    int number;
    int pinigas;
    Lankytojas lankytojas;

    cout<<"*Pasirinkite"<<endl;
    while(i>0){
        cout<<"1 - Aptarnauti lankytoja"<<endl;
        cout<<"2 - Perziureti meniu"<<endl;
        cout<<"3 - Uzsakyti prekes"<<endl;
        cout<<"4 - Perziureti prekiu sarasa bei kainas"<<endl;
        cout<<"5 - Perziureti darbuotoju roles"<<endl;
        cout<<"0 - Uzdaryti valgykla"<<endl;
        cin>>i;

        switch (i) {
            case 1:
                cout<<endl;
                lankytojas.Pasirinkimas(number);
                lankytojas.pinigai(pinigas);
                meniu.paruostiValgi(number, pinigas);
                cout<<endl;
                break;
            case 2:
                cout<<endl;
                meniu.Getsarasas();
                cout<<endl;
                break;
            case 3:
                cout<<endl;
                meniu.prekiuUzsakymas();
                cout<<endl;
                break;
            case 4:
                cout<<endl;
                meniu.prekiuInfo();
                cout<<endl;
                break;
            case 5:
                cout<<endl;
                darbuotojas.GetDarbuotojai();
                cout<<endl;
                break;
            case 0:
                i = 0;
                break;
        }
    }

    return 0;
}
