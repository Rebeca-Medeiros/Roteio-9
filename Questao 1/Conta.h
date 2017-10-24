#ifndef CONTA_H
#define  CONTA_H

#include "IConta.h"
#include <iostream>

class Conta: public IConta{
  private:
    std::string nomeCliente;
    double salarioMensal;
    int numeroConta;
    double saldo;
    double limite;
  public:
    Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo);

    void setNomeCliente(std::string nome);
    std::string getNomeCliente();

    void setSalarioMensal(double sm);
    double getSalarioMensal();

    void setNumeroConta(int num);
    int getNumeroConta();

    void setSaldo(double s);
    double getSaldo();

    void setLimite(double lim);
    double getLimite();

    void depositar(double valor, double s);
    void sacar(double valor, double s);

    void definirlimite(double sm, double lim);
};

#endif // CONTA_H
