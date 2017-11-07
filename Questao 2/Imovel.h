#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
#include "Endereco.h"

class Imovel{
    private:
        Endereco ed;
        std::string descricao;
    public:
        void setEndereco(Endereco e);
        Endereco getEndereco();

        void setDescricao(std::string des);

        virtual std::string getDescricao(std::string des) = 0;
};

#endif // IMOVEL_H
