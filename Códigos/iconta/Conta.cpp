#include "Conta.h"

Conta::Conta(){
}

Conta::Conta(std::string n, int num, double sm){
	nomeCliente = n;
	numeroConta = num;
	salarioMensal = sm;
	saldo = 0;
	definirLimite();
}

void Conta::setNome(std::string n){
	nomeCliente = n;
}
void Conta::setNum(int num){
	numeroConta = num;
}
void Conta::setSalMen(double sm){
	salarioMensal = sm;
}
void Conta::setSal(double s){
	saldo = s;
}
void Conta::setLim(double l){
	limite = l;
}

std::string Conta::getNome(){
	return nomeCliente;
}
int Conta::getNum(){
	return numeroConta;
}
double Conta::getSalMen(){
	return salarioMensal;
}
double Conta::getSal(){
	return saldo;
}
double Conta::getLim(){
	return limite;
}

void Conta::definirLimite(){
	limite = salarioMensal * 2;
}

void Conta::sacar(double valor){
	saldo -= valor;
}
void Conta::depositar(double valor){
	saldo += valor;
}
double Conta::saldoTotalDisponivel(){
	return saldo + limite;
}
