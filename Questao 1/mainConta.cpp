#include "Conta.h"
#include "ContaEspecial.h"
#include "IConta.h"
#include <iostream>

using namespace std;

int main(){
    string n;
    double slm, sl, lt , vl;
    int nc;
    int op;

    Conta c = Conta(n, slm, nc, sl);
    ContaEspecial ce;
    IConta ic;

    cout << "Digite o seu nome: " << endl;
    cin >> n;

    c.setNomeCliente(n);

    cout << "Digite o numero da conta: " << endl;
    cin >> nc;

    c.setNumeroConta(nc);

    cout << "Digite o seu salario mensal: " << endl;
    cin >> slm;

    c.setSalarioMensal(slm);

    cout << "Digite o seu saldo: " << endl;
    cin >> sl;

    c.setSaldo(sl);

    cout << endl;

    cout << "       Escolha a sua operacao" << endl;
    cout << "1 - Sacar" << endl;
    cout << "2 - Depositar" << endl;
    cin >> op;

    switch (op){
        case 1:
            cout << "Digite o valor para sacar: " << endl;
            cin >> vl;

            ic.setValor(vl);

            c.sacar(ic.getValor());

            break;
        case 2:
            cout << "Digite o valor para deposito: " << endl;
            cin >> vl;

            ic.setValor(vl);

            c.depositar(ic.getValor());

            break;
        default:
            break;
    }

    cout << "Para o limite escolha o seu limite de conta" << endl;
    cout << "1 - Conta normal" << endl;
    cout << "2 - Conta especial" << endl;
    cin >> op;

    switch (op){
        case 1:
            c.definirlimite();
            break;
        case 2:
            ce.definirlimite();
            break;
        default:
            break;
    }

    return 0;
}
