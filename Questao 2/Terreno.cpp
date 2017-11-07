#include "Terreno.h"
#include <iostream>

using namespace std;

void Terreno::setComprimento(double cm){
  comprimento = cm;
}

double Terreno::getComprimento(){
  return comprimento;
}

void Terreno::setLargura(double lr){
  largura = lr;
}

double Terreno::getLargura(){
  return largura;
}

double Terreno::Area(double cm, double lr){
  double area;

  area = cm * lr;

  cout << "A area do terreno e de " << area << "m^2" << endl;

  return 1;
}

string Terreno::getDescricao(string des){
  return des;
}
