
#include "Darbuotojas.h"

void Darbuotojas::sukurkDarbuotoja() {
    cout<<"*Pas jus atkeliavo 4 nauji darbdaviai. Jums reikia juos suskirstyti"<<endl;

    Darbuotojas darbuotojas1;
    darbuotojas1.paskirstik();
    darbuotojai.push_back(darbuotojas1);

    Darbuotojas darbuotojas2;
    darbuotojas2.paskirstik();
    darbuotojai.push_back(darbuotojas2);

    Darbuotojas darbuotojas3;
    darbuotojas3.paskirstik();
    darbuotojai.push_back(darbuotojas3);

    Darbuotojas darbuotojas4;
    darbuotojas4.paskirstik();
    darbuotojai.push_back(darbuotojas4);
}

void Darbuotojas::paskirstik() {
    cout<<"Koks yra darbuotojo vardas?"<<endl;
    string Vardas;
    getline(cin >> ws, Vardas);
    vardas = Vardas;
    cout<<"Kokia bus sio darbuotojo role? Pasirinkite:"<<endl;
    cout<<"1 - Kasininke(-as)\n2 - Vyreja(-as)\n3 - Valytoja(-as)"<<endl;
    int temp;
    cin>>temp;
    switch (temp) {
        case 1:
            role = "Kasininke(-as)";
            break;
        case 2:
            role = "Vyreja(-as)";
            break;
        case 3:
            role = "Valytoja(-as)";
            break;
    }
}

void Darbuotojas::GetDarbuotojai() {
    for (auto &&temp: darbuotojai){
        cout<<"Vardas: "<<temp.vardas<<"  Role: "<<temp.role<<endl;
    }
}
