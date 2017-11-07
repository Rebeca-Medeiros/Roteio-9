#ifndef TERRENO_H
#define TERRENO_H

#include "Imovel.h"

class Terreno: public Imovel{
  private:
    double comprimento;
    double largura;
  public:
    void setComprimento(double cm);
    double getComprimento();

    void setLargura(double lr);
    double getLargura();

    double Area(double cm, double lr);

    virtual std::string getDescricao(std::string des);
};

#endif // TERRENO_H
