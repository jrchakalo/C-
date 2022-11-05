#include "Circulo.h"

Circulo::Circulo(){
}

void Circulo::leiaAtributos(float m){
	medida = m;
}

float Circulo::areaTotal(){
	return 3.14*(medida*medida);
}

std::string Circulo::getNome(){
	std::string tipo = "Círculo" ;
	
	return tipo;
}
