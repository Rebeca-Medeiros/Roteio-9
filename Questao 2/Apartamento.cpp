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

string Apartamento::getDescricao(string des){
  return des;
}
