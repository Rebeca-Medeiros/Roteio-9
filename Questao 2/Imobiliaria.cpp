#include "Endereco.h"
#include "Imovel.h"
#include "Terreno.h"
#include "Casa.h"
#include "Apartamento.h"
#include <iostream>

//g++ Imobiliaria.cpp Terreno.cpp Casa.cpp Apartamento.cpp Imovel.cpp Endereco.cpp

using namespace std;

int main(){

      Endereco e1;
      string lrd, br, ci, cp; //variaveis para endereco
      int nr;

      int op;
      string d; // descricao

      Apartamento ap;
      string ps; //variaveis para apartamento
      double vc;
      int ig;

      Casa c1;
      Casa c2;
      int np, qd, att, acc; //variaveis para casa

      Terreno t1;
      Terreno t2;
      double com, lar; //variaveis para terreno

      cout << "Digite o logradouro: " << endl;
      cin >> lrd;
      e1.setLogradouro(lrd);

      cout << "Digite o bairro: " << endl;
      cin >> br;
      e1.setBairro(br);

      cout << "Digite o numero: " << endl;
      cin >> nr;
      e1.setNumero(nr);

      cout << "Digite a cidade: " << endl;
      cin >> ci;
      e1.setCidade(ci);

      cout << "Digite o CEP: " << endl;
      cin >> cp;
      e1.setCep(cp);

      cout << "     Escolha uma das opcoes de imoveis" << endl;
      cout << "1 - Casa" << endl;
      cout << "2 - Apartamento" << endl;
      cout << "3 - Terreno" << endl;
      cin >> op;

      cout << endl;

      switch(op){
        case 1:

            cout << "   Digite as informacoes para duas casas" << endl;

            cout << "Primeira casa" << endl;

            cout << "Digite o numero de pavimentos: " << endl;
            cin >> np;
            c1.setNumeroDePavimentos(np);

            cout << "Digite a quantidade de quartos: " << endl;
            cin >> qd;
            c1.setQuantidadeDeQuartos(qd);

            cout << "Digite a area do terreno: " << endl;
            cin >> att;
            c1.setAreaDoTerreno(att);

            cout << "Digite a area construida: " << endl;
            cin >> acc;
            c1.setAreaConstruida(acc);

            cout << "Descreva o imovel: ";
            cin >> d;

            c1.setDescricao(d);

            c1.getDescricao(d);


            cout << "Segunda casa" << endl;

            cout << "Digite o numero de pavimentos: " << endl;
            cin >> np;
            c2.setNumeroDePavimentos(np);

            cout << "Digite a quantidade de quartos: " << endl;
            cin >> qd;
            c2.setQuantidadeDeQuartos(qd);

            cout << "Digite a area do terreno: " << endl;
            cin >> att;
            c2.setAreaDoTerreno(att);

            cout << "Digite a area construida: " << endl;
            cin >> acc;
            c2.setAreaConstruida(acc);


            cout << "Descreva o imovel: ";
            cin >> d;

            c2.setDescricao(d);

            c2.getDescricao(d);

            cout << endl;
            break;
      case 2:

            cout << "   Digite as informacoes para o apartamento" << endl;

            cout << "Informe a posicao: " << endl;
            cin >> ps;
            ap.setPosicao(ps);

            cout << "Digite o valor do condominio: " << endl;
            cin >> vc;
            ap.setValorDoCondominio(vc);

            cout << "Digite o numero de vagas na garagem: " << endl;
            cin >> ig;
            ap.setNumeroDeVagasNaGaragem(ig);

            cout << "Descreva o imovel: ";
            cin >> d;

            ap.setDescricao(d);

            ap.getDescricao(d);

            break;
        case 3:
            cout << "   Digite as informacoes para duas casas" << endl;

            cout << "Primeiro terreno" << endl;

            cout << "Digite o comprimento: " << endl;
            cin >> com;
            t1.setComprimento(com);

            cout << "Digite a largura: " << endl;
            cin >> lar;
            t1.setLargura(lar);

            cout << "Descreva o imovel: ";
            cin >> d;

            t2.setDescricao(d);
            t2.getDescricao(d);


            cout << "Segundo terreno" << endl;

            cout << "Digite o comprimento: " << endl;
            cin >> com;
            t2.setComprimento(com);

            cout << "Digite a largura: " << endl;
            cin >> lar;
            t2.setLargura(lar);

            cout << "Descreva o imovel: ";
            cin >> d;

            t1.setDescricao(d);
            t2.getDescricao(d);

            t1.Area(t1.getComprimento(), t1.getLargura());
            t2.Area(t2.getComprimento(), t2.getComprimento());

            break;
        default:
            break;
    }

  return 0;
}
