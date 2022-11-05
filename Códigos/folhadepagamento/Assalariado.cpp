#include "Assalariado.h"

Assalariado::Assalariado(){
}

Assalariado::Assalariado(std::string n, int m, double sal)
: Funcionario(n, m)
{
	salario = sal;
}

double Assalariado::calculaSal(){
	return salario;
}
