#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "funcionario.h"

class Comissionado : public Funcionario
{
	public:
		Comissionado();
		Comissionado(std::string n, int m, double v, double com);
		
		double calculaSal();	
		
	private:
		double perceComi;
		double vendasMens;
};

#endif
