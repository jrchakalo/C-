#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(){
}

TrabalhadorPorHora::TrabalhadorPorHora(std::string n, float x){
	nome = n;
	valorDaHora = x;
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais){
	float x;
	float d;
	
	if(horasSemanais > 40){
		d =	horasSemanais - 40;
		horasSemanais -= d;
		d = d + (d*0.5);
		x = valorDaHora * horasSemanais;
		x += (valorDaHora*d);
	}else{
		x = valorDaHora * horasSemanais;
	}
	
	return x;
}



