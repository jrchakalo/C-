#ifndef HORISTA_H
#define HORISTA_H
#include <iostream>

#include "funcionario.h"

class Horista : public Funcionario
{
	public:
		Horista();
		Horista(std::string n, int m, double salph, double htrab);
		
		double calculaSal();
		
	private:
		double salarioPh;
		double horasTrab;
};

#endif
