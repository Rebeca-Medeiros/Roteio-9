#ifndef CASA_H
#define CASA_H

#include "Imovel.h"

class Casa: public Imovel{
  private:
    int numeroDePavimentos;
    int quantidadeDeQuartos;
    double areaDoTerreno;
    double areaConstruida;
  public:
    void setNumeroDePavimentos(int ndp);
    int getNumeroDePavimentos();

    void setQuantidadeDeQuartos(int qdq);
    int getQuantidadeDeQuartos();

    void setAreaDoTerreno(double adt);
    double getAreaDoTerreno();

    void setAreaConstruida(double ac);
    double getAreaConstruida();

    void getDescricao();

};

#endif //CASA_H
