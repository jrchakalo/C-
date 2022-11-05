#include "Despesa.h"
#include <string>
#include <iostream>

Despesa::Despesa(){
	valor = 0;
}

std::string Despesa::getNome(){
	return nome;
}

float Despesa::getValor(){
	return valor;
}

std::string Despesa::getTipo(){
	return tipoGasto;
}
		
void Despesa::setNome(std::string n){
	nome = n;
}

void Despesa::setValor(float v){
	valor = v;
}

void Despesa::setTipo(std::string t){
	tipoGasto = t;
}
