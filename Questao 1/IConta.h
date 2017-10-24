#ifndef ICONTA_H
#define ICONTA_H

class IConta{
  private:
    double valor;
  public:
    void setValor(double v);
    double getValor();

    virtual void depositar(double valor) = 0;
    virtual void sacar(double valor) = 0;
};

#endif // ICONTA_H
