#include "Horista.h"

Horista::Horista(){
}

Horista::Horista(std::string n, int m, double salph, double htrab)
: Funcionario(n, m)
{
	salarioPh = salph;
	horasTrab = htrab; 
}
		
double Horista::calculaSal(){
	double salario = salarioPh * horasTrab;
	
	if (horasTrab > 40){
		salario = (salarioPh * 40) + (((horasTrab - 40) * 1.5) * salarioPh);
	}
		
		return salario * 4;
}
