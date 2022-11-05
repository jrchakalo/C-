#include "Triangulo.h"

Triangulo::Triangulo(){
}

void Triangulo::leiaAtributos(float m, float m2){
	medida = m;
	medida2 = m2;
}

float Triangulo::areaTotal(){
	return (medida*medida2)/2;
}

std::string Triangulo::getNome(){
	std::string tipo = "Triângulo";
	
	return tipo;
}

