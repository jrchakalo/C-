#include "Pessoa.h"
#include <string>
#include "Endereco.h"

Pessoa::Pessoa(){
}

Pessoa::Pessoa(std::string n, Endereco e, std::string t){
	nome = n;
	endereco = e;
	telefone = t;
}

Pessoa::Pessoa(std::string n){
	nome = n;
}

void Pessoa::setNome(std::string n){
	nome = n;
}
void Pessoa::setEndereco(Endereco e){
	endereco = e;
}
void Pessoa::setTelefone(std::string t){
	telefone = t;
}

std::string Pessoa::getNome(){
	return nome;
}
Endereco Pessoa::getEndereco(){
	return endereco;
}
std::string Pessoa::getTelefone(){
	return telefone;
}

std::string Pessoa::toString(std::string nome, Endereco endereco, std::string telefone){
    std::string retorno;

    retorno = nome + telefone + "\n" + endereco.toString(endereco.getRua, endereco.getNumero, endereco.getBairro, endereco.getCidade, endereco.getEstado, endereco.getCEP);;

	return retorno;
}

