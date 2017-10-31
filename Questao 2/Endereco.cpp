#include "Endereco.h"
#include <iostream>

using namespace std;

void Endereco::setLogradouro(string lg){
  logradouro = lg;
}

string Endereco::getLogradouro(){
  return logradouro;
}

void Endereco::setBairro(string b){
  bairro = b;
}

string Endereco::getBairro(){
  return bairro;
}

void Endereco::setNumero(int n){
  numero = n;
}

int Endereco::getNumero(){
  return numero;
}

void Endereco::setCidade(string c){
  cidade = c;
}

string Endereco::getCidade(){
  return cidade;
}

void Endereco::setCep(string ce){
  cep = ce;
}

string Endereco::getCep(){
  return cep;
}
