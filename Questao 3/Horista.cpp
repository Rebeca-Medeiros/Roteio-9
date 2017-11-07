#include "Horista.h"
#include <iostream>

using namespace std;

void Horista::setSalarioPorHora(double sh){
  salarioPorHora = sh;
}

double Horista::getSalarioPorHora(){
  return salarioPorHora;
}

void Horista::setHorasTrabalhadas(ht){
  horasTrabalhadas = ht;
}

double Horista::getHorasTrabalhadas(){
  return horasTrabalhadas;
}

double Horista::calculaSalario(){
  if(horasTrabalhadas > 0 && horasTrabalhadas <= 40){
    double s;
    s = getSalario() * 4;
    cout << "Salario do trabalhador, sem hora extra R$" << s << endl;
  } else {
    if(horasTrabalhadas > 40){
        s = (getSalario() * 4) + (((horasTrabalhadas - 40) * 1.5) * getSalario());
        cout << "Salario do trabalhador, com hora extra R$" << s << endl;  
    }
  }
}


