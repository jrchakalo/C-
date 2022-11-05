#include "Retangulo.h"

Retangulo::Retangulo(){
}

void Retangulo::leiaAtributos(float m, float m2){
	medida = m;
	medida2 = m2;
}

float Retangulo::areaTotal(){
	return medida*medida2;
}

std::string Retangulo::getNome(){
	std::string tipo = "Retângulo";
	
	return tipo;
}

