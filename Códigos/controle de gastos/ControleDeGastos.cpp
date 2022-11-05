#include <iostream>
#include "ControleDeGastos.h"
#include "Despesa.h"
#include <string>

ControleDeGastos::ControleDeGastos(){
	
}

Despesa ControleDeGastos::getDespesa(int pos){
	return despesas[pos];
}

void ControleDeGastos::setDespesa(Despesa d, int pos){
	despesas[pos] = d;
}

float ControleDeGastos::totalDeDespesas(){
	float total=0;
	int i;
	
	for (i=0; i<100; i++){
		total += despesas[i].getValor();
	}
	return total;
}

float ControleDeGastos::calculaTotalDeDespesas(std::string tipo){
	float total=0;
	int i;
	
	for (i=0; i<100; i++){
		if(despesas[i].getTipo() == tipo){
			total += despesas[i].getValor();
		}
	}
	return total;
}

bool ControleDeGastos::existeDespesa(std::string tipo){
	int i;
	
	for (i=0; i<100; i++){
		if(despesas[i].getTipo() == tipo){
			return true;
		}
	}
	
	return false;	
}
