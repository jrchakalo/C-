#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"

class Pessoa
{
	public:
		Pessoa();
		Pessoa(std::string n);
		Pessoa(std::string n, Endereco ende, std::string t);
		
		void setNome(std::string n);
		void setEndereco(Endereco ende);
		void setTelefone(std::string t);
		std::string getNome();
		Endereco getEndereco();
		std::string getTelefone();
		
		std::string toString();
	private:
		std::string nome;
		Endereco endereco;
		std::string telefone;
};

#endif
