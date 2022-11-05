#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "funcionario.h"

class Assalariado : public Funcionario
{
	public:
		Assalariado();
		Assalariado(std::string n, int m, double sal);
		
		double calculaSal();
			
	private:
		double salario;
		
};

#endif
