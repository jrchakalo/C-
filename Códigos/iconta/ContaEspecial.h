#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"

class ContaEspecial : public Conta
{
	public:
		ContaEspecial();
		ContaEspecial(std::string n, int num, double sm);
		
		void definirLimite();
		
	protected:
};

#endif
