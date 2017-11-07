#include "Comissionado.h"
#include <iostream>

using namespace std;

void Comissionado::setSalarioBase(double sb){
  salarioBase = sb;
}

double Comissionado::getSalarioBase(){
  return salarioBase;
}

void Comissionado::setVendasSemanais(double vs){
  vendasSemanais = vs;
}

double Comissionado::getVendasSemanais(){
  return vendasSemanais;
}

void Comissionado::setPercentualComissao(double p){
  p = p/100;

  percentualComissao = p;
}

double Comissionado::getPercentualComissao(){
  return percentualComissao;
}

double Comissionado::calculaSalario(){
  double s;
  
  s = salarioBase + (4 * (percentualComissao * vendasSemanais);
  cout << "O salario mensal desse trabalhador e R$" << salario << endl;
}

