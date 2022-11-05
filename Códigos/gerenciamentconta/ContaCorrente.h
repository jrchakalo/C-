#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente : public Conta
{
	public:
		ContaCorrente();
		ContaCorrente(std::string n, int num, double s, double sm, double l);
		
		void setSalario(double sm);
		void setLimite(double l);
		double getSalario();
		double getLimite();
		
		double getSaldoTot();
		virtual double defLim();
		
	protected:
		double salario;
		double limite;
};

#endif
