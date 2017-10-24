#include "Conta.h"
#include <iostream>
#include <string>

using namespace std;

Conta::Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo){
  this->nomeCliente = nomeCliente;
  this->salarioMensal = salarioMensal;
  this->numeroConta = numeroConta;
  this->saldo = saldo;
}

void Conta::setNomeCliente(string nome){
  nomeCliente = nome;
}

string Conta::getNomeCliente(){
  return nomeCliente;
}

void Conta::setSalarioMensal(double sm){
    salarioMensal = sm;
}

double Conta::getSalarioMensal(){
  return salarioMensal;
}

void Conta::setSaldo(double s){
  saldo = s;
}

double Conta::getSaldo(){
  return saldo;
}

void Conta::setNumeroConta(int n){
  numeroConta = n;
}

int Conta::getNumeroConta(){
  return numeroConta;
}

void Conta::setLimite(double lim){
  limite = lim;
}

double Conta::getLimite(){
  return limite;
}

void Conta::depositar(double valor, double s){
    s += valor;
    cout << "O valor do deposito foi R$" << valor << endl;
    cout << "E o novo saldo e R$" << s << endl;
}

void Conta::sacar(double valor, double s){
    s -= valor;
    cout << "O valor para retirada foi R$" << valor << endl;
    cout << "E o novo saldo e R$" << s << endl;
}

void Conta::definirlimite(double sm, double lim){
    lim= 2 * sm;
    cout << "O limite da conta e R$" << limite;
}



