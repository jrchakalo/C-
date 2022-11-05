#include "Endereco.h"
#include <string>
#include <iostream>

Endereco::Endereco(){
}

Endereco::Endereco(std::string r, int num, std::string b, std::string c, std::string e, std::string cep){
	rua = r;
	numero = num;
	bairro = b;
	cidade = c;
	estado = e;
	CEP = cep;
}
		
std::string Endereco::toString(){
	
	return rua + ", " + std::to_string(numero)+ ", " + bairro + ". " + cidade + " - " + estado + ". CEP: " + CEP + "\n";
}

int Endereco::getNumero(){
	return numero;
}
std::string Endereco::getRua(){
	return rua;
}
std::string Endereco::getBairro(){
	return bairro;
}
std::string Endereco::getCidade(){
	return cidade;
}
std::string Endereco::getEstado(){
	return estado;
}
std::string Endereco::getCEP(){
	return CEP;
}
