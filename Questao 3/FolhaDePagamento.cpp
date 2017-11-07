#include "Funcionario.h"
#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#define MAX 10
#include <iostream>
#include <string>

//g++ FolhaDePagamento.cpp Horista.cpp Comissionado.cpp  Assalariado.cpp Funcionario.cpp SistemaGerenciaFolha.cpp

using namespace std;

int main{
    string n;
    double st, sbase, s, percentual, vs, hr;
    int mt; 
    int op;

    Funcionario f;
    Horista h;
    Assalariado a;
    Comissionado c;
    SistemaGerenciaFolha sf;

    cout << "Sistema de folha de pagamento" << endl;
    cout << "1 - Assalariado" << endl;
    cout << "2 - Horista" << endl;
    cout << "3 - Comissionado" << endl;
    cin >> op;

    switch(op){
        case 1:
            cout << "Digite o nome: " << endl;
            cin >> n;

            a.setNome(n);

            cout << "Digite a matricula: " << endl;
            cin >> m;

            a.setMatricula(m);

            cout << "Digite o salario: " << endl;
            cin >> s;
            
            a.setSalario(s);

            a.calculaSalario();

            break;
        case 2:
            cout << "Digite o nome: " << endl;
            cin >> n;

            h.setNome(n);

            cout << "Digite a matricula: " << endl;
            cin >> m;

            h.setMatricula(m);

            cout << "Digite o salario por hora: " << endl;
            cin >> st;

            h.setSalarioPorHora(st);

            cout << "Digite as horas trabalhadas: " << endl;
            cin >> hr;

            h.setHorasTrabalhadas(hr);

            h.calculaSalario();
            break;
        case 3:
            cout << "Digite o nome: " << endl;
            cin >> n;

            c.setNome(n);

            cout << "Digite a matricula: " << endl;
            cin >> m;

            c.setMatricula(m);

            cout << "Digite as vendas semanais: " << endl;
            cin >> vs;

            c.setVendasSemanais(vs);

            cout << "Digite o seu percentual de comissao: " << endl;
            cin >> percentual;

            c.setPercentualComissao(percentual);

            c.calculaSalario();
            break;
        default:    
            cout << "Opcao invalida" << endl;
            break;
    } 

  return 0;
}
