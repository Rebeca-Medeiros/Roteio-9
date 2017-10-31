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

void Casa::getDescricao(){
  cout << "Logradouro: " << Endereco.getLogradouro() << endl;
  cout << "Bairro: " << Endereco.getBairro() << endl;
  cout << "Numero: " << Endereco.getNumero() << endl;
  cout << "Cidade: " << Endereco.getCidade() << endl;
  cout << "CEP: " << Endereco.getCep() << endl;
  cout << "Numero de pavimentos: " << Casa.getNumeroDePavimentos() << endl;
  cout << "Quantidade de quartos: " << Casa.getQuantidadeDeQuartos() << endl;
  cout << "Area do terreno: " << Casa.getAreaDoTerreno() << endl;
  cout << "Area construida: " << Casa.getAreaConstruida() << endl;
}
