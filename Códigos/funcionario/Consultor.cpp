#include "Consultor.h"

Consultor::Consultor(){
}

float Consultor::getSal(){
	return salario+(salario*0.1);
}
	
float Consultor::getSalario(float percentual){
		return salario*percentual;
}	
