#include "Pessoa.h"

Pessoa::Pessoa(){
	
}

Pessoa::Pessoa(std::string n){
}

Pessoa::Pessoa(std::string n, Endereco ende, std::string t){
	nome = n;
	endereco = ende;
	telefone = t;
}
		
void Pessoa::setNome(std::string n){
	nome = n;
}
void Pessoa::setEndereco(Endereco ende){
	endereco = ende;
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
		
std::string Pessoa::toString(){
	return nome + ", " + telefone + "\n" + endereco.toString();
}
