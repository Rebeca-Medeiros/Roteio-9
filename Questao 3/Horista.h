#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"

class Horista: public Funcionario{
  private:
    double salarioPorHora;
    double horasTrabalhadas;
  public:
    void setSalarioPorHora(double sh);
    double getSalarioPorHora();

    void setHorasTrabalhadas(double ht);
    double getHorasTrabalhadas();

    double calculaSalario();
};

#endif //HORISTA_H
