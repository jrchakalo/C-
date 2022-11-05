#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){
}

ContaEspecial::ContaEspecial(std::string n, int num, double sm)
: Conta(n, num, sm)
{
	definirLimite();
}

void ContaEspecial::definirLimite(){
	limite = salarioMensal * 3;
}
