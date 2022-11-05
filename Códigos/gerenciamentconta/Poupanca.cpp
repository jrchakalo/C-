#include "Poupanca.h"

Poupanca::Poupanca(){
}

Poupanca::Poupanca(std::string n, int num, double s, int vari, double tax)
: Conta(n, num, s)
{
	variacao = vari;
	taxaRendi = tax;	
}

void Poupanca::setVari(int vari){
	variacao = vari;
}
void Poupanca::setTax(double tax){
	taxaRendi = tax;
}
int Poupanca::getVari(){
	return variacao;
}
double Poupanca::getTax(){
	return taxaRendi;
}

double Poupanca::render(){
	if(variacao == 51){
		saldo += (saldo*taxaRendi);
	}else if(variacao == 1){
		saldo += ((saldo*taxaRendi) + 0.005);
	}
	
	return saldo;	
}
