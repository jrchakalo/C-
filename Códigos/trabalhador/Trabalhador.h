#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

class Trabalhador
{
	public:
		Trabalhador();
		
		void setNom(std::string n);
		void setSal(float s);
		
		std::string getNom();
		float getSal();
		
	protected:
		std::string nome;
		float salario;
};

#endif
