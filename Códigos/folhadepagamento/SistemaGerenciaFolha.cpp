#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(){
}

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcMax){
	orcamentoMax = orcMax;
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *func){
	funcionarios.push_back(func);
}

double SistemaGerenciaFolha::calculaValTotFolha(){
	double tot=0;
	
	for(int i = 0; i < funcionarios.size(); i++){
		tot += funcionarios[i]->calculaSal();
	}
	
	if (tot > orcamentoMax){
		throw OrcamentoEstouradoException(tot);
	}
	
	return tot;
}

double SistemaGerenciaFolha::consultaSalFunc(std::string n){
	for(int i = 0; i < funcionarios.size(); i++){
		if(funcionarios[i]->getNome() == n){
			return funcionarios[i]->calculaSal();
		}
	}
	
	throw FuncionarioNaoExisteException(n);
	return -1;
}
