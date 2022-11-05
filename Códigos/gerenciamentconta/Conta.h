#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <iostream>

class Conta 
{
	public:
		Conta();
		Conta(std::string n, int num, double s);
		
		std::string getNome();
		int getNum();
		double getSal();
		
		void setNome(std::string n);
		void setNum(int num);
		void setSal(double s);
		
		int sacar(double valor);
		void depositar(double valor);
		
		virtual double getSaldoTot();
		
	protected:
		std::string nomeCliente;
		int numeroConta;
		double saldo;	
};

#endif
