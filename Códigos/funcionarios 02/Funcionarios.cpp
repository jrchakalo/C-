#include "Funcionarios.h"
#include <iostream>
#include <string>

Funcionarios::Funcionarios(){
}

Funcionarios::Funcionarios(std::string n, std::string sb, float s){
	nome = n;
	sobrenome = sb;
	salario = s;
}

Funcionarios::salarioAnual(float salario){
	float retorno;
	
	retorno = salario * 12;
	
	return retorno;	
}

Funcionarios::aumentoSalario(float per){
	float salario2, retorno;
	
	retorno = salarioAnual(salario);
	
	salario2 = retorno + (retorno * per);
	
	return salario2;
}

std::string Funcionarios::getNome(){
	return nome;
}

std::string Funcionarios::getSobrenome(){
	return sobrenome;
}

float Funcionarios::getSalario(){
	return salario;
}
		
Funcionarios::setNome(std::string n){
	nome = n;
}

Funcionarios::setSobrenome(std::string sb){
	sobrenome = sb;
}

Funcionarios::setSalario(float s){
	salario = s;
}
