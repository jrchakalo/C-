#include "Funcionario.h"

Funcionario::Funcionario(){
}

Funcionario::Funcionario(std::string n, int m){
	nome = n;
	matri = m;
}

std::string Funcionario::getNome(){
	return nome;
}
