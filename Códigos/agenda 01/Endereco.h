#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

class Endereco
{
	public:
		Endereco();
		Endereco(std::string r, int num, std::string b, std::string c, std::string e, std::string cep);
		
		std::string toString();
		
		int getNumero();
		std::string getRua();
		std::string getBairro();
		std::string getCidade();
		std::string getEstado();
		std::string getCEP();
	private:
		std::string rua;
		int numero;
		std::string bairro;
		std::string cidade;
		std::string estado;
		std::string CEP;
};

#endif
