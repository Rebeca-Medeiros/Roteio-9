#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>

class Endereco{
  private:
    std::string logradouro;
    std::string bairro;
    int numero;
    std::string cidade;
    std::string cep;
  public:
    void setLogradouro(std::string lg);
    std::string getLogradouro();

    void setBairro(std::string b);
    std::string getBairro();

    void setNumero(int n);
    int getNumero();

    void setCidade(std::string c);
    std::string getCidade();

    void setCep(std::string ce);
    std::string getCep();
};

#endif // ENDERECO_H
