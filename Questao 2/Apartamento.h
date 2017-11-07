#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Imovel.h"
#include <iostream>

class Apartamento: public Imovel{
  private:
    std::string posicao;
    double valorDoCondominio;
    int numeroDeVagasNaGaragem;
  public:
    void setPosicao(std::string p);
    std::string getPosicao();

    void setValorDoCondominio(double v);
    double getValorDoCondominio();

    void setNumeroDeVagasNaGaragem(int nv);
    int getNumeroDeVagasNaGaragem();

    std::string getDescricao(std::string des);
};

#endif // APARTAMENTO_H
