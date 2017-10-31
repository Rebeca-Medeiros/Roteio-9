#include "Apartamento.h"
#include <iostream>

using namespace std;

void Apartamento::setPosicao(string p){
  posicao = p;
}

string Apartamento::getPosicao(){
  return posicao;
}

void Apartamento::setValorDoCondominio(double v){
  valorDoCondominio = v;
}

double Apartamento::getValorDoCondominio(){
  return valorDoCondominio;
}

void Apartamento::setNumeroDeVagasNaGaragem(int nv){
  numeroDeVagasNaGaragem = nv;
}

int Apartamento::getNumeroDeVagasNaGaragem(){
  return numeroDeVagasNaGaragem;
}

void Apartamento::getDescricao(){
  cout << "Logradouro: " << Endereco.getLogradouro() << endl;
  cout << "Bairro: " << Endereco.getBairro() << endl;
  cout << "Numero: " << Endereco.getNumero() << endl;
  cout << "Cidade: " << Endereco.getCidade() << endl;
  cout << "CEP: " << Endereco.getCep() << endl;
  cout << "Posicao: " << Apartamento.getPosicao() << endl;
  cout << "Valor do condominio: " << Apartamento.getValorDoCondominio() << endl;
  cout << "Numero de vagas na garagem: " << Apartamento.getNumeroDeVagasNaGaragem() << endl;
}
