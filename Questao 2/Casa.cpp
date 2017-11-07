#include "Casa.h"
#include <iostream>

using namespace std;

void Casa::setNumeroDePavimentos(int ndp){
  numeroDePavimentos = ndp;
}

int Casa::getNumeroDePavimentos(){
  return numeroDePavimentos;
}

void Casa::setQuantidadeDeQuartos(int qdq){
  quantidadeDeQuartos = qdq;
}

int Casa::getQuantidadeDeQuartos(){
  return quantidadeDeQuartos;
}

void Casa::setAreaDoTerreno(double adt){
  areaDoTerreno = adt;
}

double Casa::getAreaDoTerreno(){
  return areaDoTerreno;
}

void Casa::setAreaConstruida(double ac){
  areaConstruida = ac;
}

double Casa::getAreaConstruida(){
  return areaConstruida;
}

string Casa::getDescricao(string des){
  return des;
}
