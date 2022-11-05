#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
	public:
		Funcionario();
		
		void setMatri(int m);
		void setNom(std::string n);
		void setSal(float s);
		
		int getMatri();
		std::string getNom();
		float getSal();
				
	protected:
		int matricula;
		std::string nome;
		float salario;
};

#endif
