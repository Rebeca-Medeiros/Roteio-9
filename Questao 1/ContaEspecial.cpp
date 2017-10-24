#include "ContaEspecial.h"
#include <iostream>

using namespace std;

void ContaEspecial::definirlimite(double sm, double lim){
    lim = 3 * sm;
    cout << "O limite para a conta especial e de R$" << lim;
}
