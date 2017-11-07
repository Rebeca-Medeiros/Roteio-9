#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado: public Funcionario{
  private:
    double salario;
  public:
    void setSalario(double s);
    double getSalario();

    double calculaSalario();
};

#endif //ASSALARIADO_H
