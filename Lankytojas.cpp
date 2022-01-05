

#include "Lankytojas.h"

void Lankytojas::Pasirinkimas(int &pageidavimas) {
    srand(time(0));
    pageidavimas = rand() % 5 + 1;

}

void Lankytojas::pinigai(int &pinigas) {
    srand(time(0));
    pinigas = rand() % 60 + 1;
}
