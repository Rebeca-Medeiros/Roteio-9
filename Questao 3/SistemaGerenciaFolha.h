#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#define MAX 10

class SistemaGerenciaFolha{
  private:
    Funcionario funcionarios[MAX];
  public:
    void setFuncionarios(Funcionario f);
    Funcionario getFuncionarios();

    double calculaValorTotal();
    double consultaSalarioFuncionario();
};

#endif //SISTEMAGERENCIAFOLHA_H
