#include "Trabalhador.h"

Trabalhador::Trabalhador(){
	salario = 0;
}

void Trabalhador::setNom(std::string n){
	nome = n;
}
void Trabalhador::setSal(float s){
	salario = s;
}
		
std::string Trabalhador::getNom(){
	return nome;
}
float Trabalhador::getSal(){
	return salario;
}
