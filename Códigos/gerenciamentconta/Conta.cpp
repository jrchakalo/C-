#include "Conta.h"

Conta::Conta(){
}

Conta::Conta(std::string n, int num, double s){
	nomeCliente = n;
	numeroConta = num;
	saldo = 0;
}

void Conta::setNome(std::string n){
	nomeCliente = n;
}
void Conta::setNum(int num){
	numeroConta = num;
}

void Conta::setSal(double s){
	saldo = s;
}

std::string Conta::getNome(){
	return nomeCliente;
}
int Conta::getNum(){
	return numeroConta;
}
double Conta::getSal(){
	return saldo;
}

int Conta::sacar(double valor){
	if(valor > getSaldoTot()){
		return 1;
	}else{
		saldo -= valor;
		return 0;
	}	
}
void Conta::depositar(double valor){
	saldo += valor;
}

double Conta::getSaldoTot(){
	return saldo;
}
