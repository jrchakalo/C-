#include "Quadrado.h"

Quadrado::Quadrado(){
}

void Quadrado::leiaAtributos(float m){
	medida = m;
}

float Quadrado::areaTotal(){
	return medida*medida;
}

std::string Quadrado::getNome(){
	std::string tipo = "Quadrado" ;
	
	return tipo;
}


