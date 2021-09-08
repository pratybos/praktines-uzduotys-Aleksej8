#include<iostream>
#include<iomanip>
using namespace std;

void plotas(double spind, double &PT, double pi){ //sioje funkcijoje apskaciuojamas apskritimo plotas
    PT=pi*spind*spind;
}

void ilgis(double spind, double &IL, double pi){ //sioje funkcijoje apskaiciuojamas apskritimo ilgis
    IL=2*pi*spind;
}

int main(){ //pagrindine funkcija
    cout<<"Tai programa, kuri apskaiciuoja apskritimo ilgi ir plota ivedus apskritimo spinduli"<<endl;
    cout<<endl;

    double pi=3.14159;
    double spind, PT, IL; //spind-spindulys; PT-plotas; IL-ilgis
    cout<<"Iveskite apskritimo spinduli: ";
    cin>>spind;
    cout<<endl;

    plotas(spind, PT, pi); //kreipiamasi i funkcijas "plotas" ir "ilgis", kad apskaiciuotu reikiamus duomenys
    ilgis(spind, IL, pi);

    cout<<"Pagal formule: PI*spindulys*spindulys, apskaiciuotas apskritimo plotas gavosi: "<<setprecision(2)<<fixed<<PT<<endl;
    cout<<"Pagal formule: 2*PI*spindulys, apskaiciuotas apskritimo ilgis gavosi:"<<setprecision(2)<<fixed<<IL<<endl;

    //setprecision,kuris buvo panaudotas 26 ir 27 eiluteje, leidzia nustatyti kiek skaiciu reikia palikti po kableliu, o fixed parodo skaicius aiskiu pavidalu

    return 0;
}