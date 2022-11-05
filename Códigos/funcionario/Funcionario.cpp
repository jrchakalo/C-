#include "Funcionario.h"

Funcionario::Funcionario(){
}

void Funcionario::setMatri(int m){
	matricula = m;
}
void Funcionario::setNom(std::string n){
	nome = n;
}
void Funcionario::setSal(float s){
	salario = s;
}
		
int Funcionario::getMatri(){
	return matricula;
}
std::string Funcionario::getNom(){
	return nome;
}
float Funcionario::getSal(){
	return salario;
}
