#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"

class Comissionado: public Funcionario{
  private:
    double vendasSemanais:
    double percentualComissao;
    double salarioBase;
  public:
    void setSalarioBase(double sb);
    double getSalarioBase();

    
    void setVendasSemanais(double vs);
    double getVendasSemanais();

    void setPercentualComissao(double p);
    double getPercentualComissao();

    double calculaSalario();
};

#endif //COMISSIONADO_H
