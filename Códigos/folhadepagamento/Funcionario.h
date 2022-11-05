#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
	public:
		Funcionario();
		Funcionario(std::string n, int m);
		
		virtual double calculaSal() = 0;
		std::string getNome();
		
	protected:
		std::string nome;
		int matri;
};

#endif
