#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include "Endereco.h"

class Pessoa
{
	public:
		Pessoa();
		Pessoa(std::string n);
		Pessoa(std::string n, Endereco e, std::string t);

		void setNome(std::string n);
		void setTelefone(std::string t);
		void setEndereco(Endereco e);

		std::string getNome();
		Endereco getEndereco();
		std::string getTelefone();

		std::string toString(std::string nome, Endereco endereco, std::string telefone);
	private:
		std::string nome;
		Endereco endereco;
		std::string telefone;
};

#endif

