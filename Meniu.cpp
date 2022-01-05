

#include "Meniu.h"


void Meniu::sukurkmeniu() {
    cout<<"*Pradesim nuo meniu, kuri sudaro 5 patiekalai."<<endl;

    Meniu patiekalas1;
    patiekalas1.SetName();
    patiekalas1.SetPrice();
    patiekalas1.PirkimoKaina();
    sarasas.push_back(patiekalas1);

    Meniu patiekalas2;
    patiekalas2.SetName();
    patiekalas2.SetPrice();
    patiekalas2.PirkimoKaina();
    sarasas.push_back(patiekalas2);

    Meniu patiekalas3;
    patiekalas3.SetName();
    patiekalas3.SetPrice();
    patiekalas3.PirkimoKaina();
    sarasas.push_back(patiekalas3);

    Meniu patiekalas4;
    patiekalas4.SetName();
    patiekalas4.SetPrice();
    patiekalas4.PirkimoKaina();
    sarasas.push_back(patiekalas4);

    Meniu patiekalas5;
    patiekalas5.SetName();
    patiekalas5.SetPrice();
    patiekalas5.PirkimoKaina();
    sarasas.push_back(patiekalas5);

    cout<<"\nMeniu sekmingai sukurtas!\n"<<endl;
}

void Meniu::Getsarasas() {
    for (auto &&temp: sarasas){
        cout<<temp.pavadinimas<<"    Kaina: "<<temp.kaina<<endl;
    }
}

void Meniu::SetName() {
    cout<<"Iveskite patiekalo pavadinima "<<endl;
    string pav;
    getline(cin >> ws, pav);
    pavadinimas = pav;


}

void Meniu::SetPrice() {
    cout<<"Iveskite patiekalo kaina"<<endl;
    double Kaina;
    cin>>Kaina;
    kaina = Kaina;
}

void Meniu::PirkimoKaina() {
    pirkimoKaina = kaina * 0.75;
    prekiuSk = 0;
}

void Meniu::prekiuInfo() {
    for (auto &&temp: sarasas){
        cout<<temp.pavadinimas<<"    Prekes kaina: "<<temp.pirkimoKaina<<"    Dabartinis prekiu skaicius: "<<temp.prekiuSk<<endl;
    }
}

void Meniu::prekiuUzsakymas() {
    double IsViso = 0;

    cout<<"*Prekiu kainos yra 75% nuo patiekalo kainos"<<endl;
    for (auto &&temp: sarasas){
        cout<<"Kiek noresite uzsakyti \""<<temp.pavadinimas<<"\"?"<<endl;
        int sk;
        cin>>sk;
        IsViso = IsViso + sk * temp.pirkimoKaina;
        temp.prekiuSk = temp.prekiuSk + sk;
    }
    cout<<"\nPrekems isleista "<<IsViso<<" pinigu"<<endl;
}

void Meniu::paruostiValgi(int pasirinkimas, int pinigas) {
    int i = 1;
    for(auto &&temp: sarasas){
        if (i == pasirinkimas){
            cout<<"Uzsakytas patiekalas: \""<<temp.pavadinimas<<"\", patiekalo kaina: "<<temp.kaina<<", prekiu likutis: "<<temp.prekiuSk<<endl;

            if(temp.prekiuSk>0 && pinigas >= temp.kaina){
                temp.prekiuSk = temp.prekiuSk - 1;
                cout<<"Jusu patiekalas \""<<temp.pavadinimas<<"\" yra ruosiamas, uz patiekala sumoketa buvo "<<pinigas<<" pinigu, graza yra "<<pinigas-temp.kaina<<endl;
            }

            else if (temp.prekiuSk<1){
                cout<<"Deja, bet nera tam tikru prekiu siam patiekalui"<<endl;
            }

            else{
                cout<<"Deja, bet neuztenka pinigo, patiekalas kainuoja "<<temp.kaina<<", o jus turite "<<pinigas<<endl;
            }
            break;
        }
        i = i + 1;
    }
}

