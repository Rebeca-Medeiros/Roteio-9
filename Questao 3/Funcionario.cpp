#include "Funcionario.h"
#include <iostream>

using namespace std;

void Funcionario::setNome(string n){
	nome = n;
}

string Funcionario::getNome(){
	return nome;
}

void Funcionario::setMatricula(int m){
	matricula = m;
}

int Funcionario::getMatricula(){
	return matricula;
}
