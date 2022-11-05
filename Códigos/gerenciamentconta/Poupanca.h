#ifndef POUPANCA_H
#define POUPANCA_H

#include "Conta.h"

class Poupanca : public Conta
{
	public:
		Poupanca();
		Poupanca(std::string n, int num, double s, int vari, double tax);
		
		void setVari(int vari);
		void setTax(double tax);
		int getVari();
		double getTax();
		
		double render();
		
	private:
		int variacao;
		double taxaRendi;
};

#endif
