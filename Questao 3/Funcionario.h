#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>

class Funcionario{
	private:
		std::string nome;
		int matricula;
	public:
		void setNome(std::string n);
		std::string getNome();

		void setMatricula(int m);
		int getMatricula();
		
		virtual double calculaSalario() = 0;
};


#endif //FUNCIONARIO_H
