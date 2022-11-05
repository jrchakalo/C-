#include "Comissionado.h"

Comissionado::Comissionado(){
}

Comissionado::Comissionado(std::string n, int m, double v, double com)
: Funcionario(n, m)
{
	vendasMens = v;
	perceComi = com;
}

double Comissionado::calculaSal(){
	return vendasMens * perceComi;
}
