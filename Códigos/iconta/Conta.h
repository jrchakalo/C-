#ifndef CONTA_H
#define CONTA_H
#include <string>

#include "IConta.h"

class Conta : public IConta
{
	public:
		Conta();
		Conta(std::string n, int num, double sm);
		
		std::string getNome();
		int getNum();
		double getSalMen();
		double getSal();
		double getLim();
		
		void setNome(std::string n);
		void setNum(int num);
		void setSalMen(double sm);
		void setSal(double s);
		void setLim(double l);
		
		virtual void definirLimite();
		
		void sacar(double valor);
		void depositar(double valor);
		double saldoTotalDisponivel();
		
	protected:
		std::string nomeCliente;
		int numeroConta;
		double salarioMensal;
		double saldo;
		double limite;	
};

#endif
