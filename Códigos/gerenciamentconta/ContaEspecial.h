#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente
{
	public:
		ContaEspecial();
		ContaEspecial(std::string n, int num, double s, double sm, double l);

		double defLim();

	private:
};

#endif
