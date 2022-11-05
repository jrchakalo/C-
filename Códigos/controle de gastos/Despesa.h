#ifndef DESPESA_H
#define DESPESA_H
#include <string>
#include <iostream>

class Despesa
{
	public:
		Despesa();
		
		std::string getNome();
		float getValor();
		std::string getTipo();
		
		void setNome(std::string n);
		void setValor(float v);
		void setTipo(std::string t);
	private:
		std::string nome;
		float valor;
		std::string tipoGasto;
};

#endif
