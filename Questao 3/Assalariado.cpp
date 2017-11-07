#include "Assalariado.h"
#include <iostream>

using namespace std;

void Assalariado::setSalario(double s){
  salario = s;
}

double Assalariado::getSalario(){
  return salario;
}

void Assalariado::calculaSalario(){
  cout << "O salario do trabalhador e R$" << getSalario() << endl;
}
