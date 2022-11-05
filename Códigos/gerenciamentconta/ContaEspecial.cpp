#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){
}

ContaEspecial::ContaEspecial(std::string n, int num, double s, double sm, double l)
: ContaCorrente(n, num, s, sm, l)
{
	
}

double ContaEspecial::defLim(){
	limite = salario * 4;
	return limite;
}
