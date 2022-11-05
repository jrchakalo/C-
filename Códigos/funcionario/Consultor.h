#ifndef CONSULTOR_H
#define CONSULTOR_H

#include "Funcionario.h"

class Consultor : public Funcionario
{
	public:
		Consultor();
	
		float getSal();
		float getSalario(float percentual);
		
	protected:
};

#endif
