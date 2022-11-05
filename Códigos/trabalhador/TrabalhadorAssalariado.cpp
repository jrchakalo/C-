#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(){
}

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string n, float s){
	nome = n;
	salario = s;
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(){
	return salario/4;
}

float TrabalhadorAssalariado::getSal(){
	return salario;
}
