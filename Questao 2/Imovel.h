#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
#include "Endereco.h"

class Imovel{
    private:
        Endereco ed;
    public:
        void setEndereco(Endereco e);
        Endereco getEndereco();

        virtual void getDescricao() = 0;
};

#endif // IMOVEL_H
