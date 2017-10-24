#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>

class Imovel{
    private:
        std::string endereco;
    public:
        void setEndereco(std::string ed);
        std::string getEndereco();

        virtual void getDescricao() = 0;
};



#endif // IMOVEL_H
