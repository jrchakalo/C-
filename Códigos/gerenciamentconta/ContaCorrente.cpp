#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(){
}

ContaCorrente::ContaCorrente(std::string n, int num, double s, double sm, double l)
: Conta(n, num, s)
{
	salario = sm;
	limite = l;
}

void ContaCorrente::setSalario(double sm){
	salario = sm;
}
void ContaCorrente::setLimite(double l){
	limite = l;
}
double ContaCorrente::getSalario(){
	return salario;
}
double ContaCorrente::getLimite(){
	return limite;
}

double ContaCorrente::getSaldoTot(){
	return saldo+limite;
}

double ContaCorrente::defLim(){
	limite = salario * 2;
	return limite;
}
