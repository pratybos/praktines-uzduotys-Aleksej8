#include<iostream>

void skaiciuok(int &nul, int sk)
{
    int k;
    while(sk>0){
        k=sk%10;
        if(k!=0){nul=1;}
        else {nul=0; break;}
        sk=sk/10;
    }
}

int main() {
    int n, A, B;
    std::cout << "Tai programa, kuri randa pirmaja skaiciu suma, kuriuose nera nuliu" << std::endl;
    std::cout << std::endl;
    std::cout << "Iveskite teigiama skaiciu pradedant nuo 2"<<std::endl;
    std::cin >> n;
    B = n - 1;

    int nulA, nulB;
    for (int i = 1; i <= B; i++) {
        A = i;


        skaiciuok(nulA, A);
        skaiciuok(nulB, B);
        if (nulA == 1 && nulB == 1) { break; }
        else {
            B = B - 1;
            continue;
        }
    }
    std::cout << "Atsakymas: " << A << " ir " << B;
    return 0;
}