#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ContaCorrente cont1;
	ContaEspecial cont2;
	Poupanca cont3;
	string n;
	int num, vari, retorno;
	double sm, s, lim, tax, valor;
	
	getline(cin, n);
	cin >> num;
	cin >> sm;
	cont1 = ContaCorrente(n, num, 0, sm, 0);
	cont1.defLim();
	cin >> valor;
	cont1.depositar(valor);
	cin >> valor;
	retorno = cont1.sacar(valor);
	getchar();
	
	if(retorno == 0){
		cout << cont1.getNome() << ", cc: " << cont1.getNum() << ", sal�rio " << cont1.getSalario() << ", saldo total dispon�vel: R$ " << cont1.getSaldoTot() << endl;	
	}else{
		cout << cont1.getNome() << ", cc: " << cont1.getNum() << ", sal�rio " << cont1.getSalario() << ",\nsaldo insuficiente\nsaldo total dispon�vel: R$ " << cont1.getSaldoTot() << endl;
	}
	
	getline(cin, n);
	cin >> num;
	cin >> sm;
	cont2 = ContaEspecial(n, num, 0, sm, 0);
	cont2.defLim();
	cin >> valor;
	cont2.depositar(valor);
	cin >> valor;
	retorno = cont2.sacar(valor);
	getchar();
	
	if(retorno == 0){
		cout << cont2.getNome() << ", cc: " << cont2.getNum() << ", sal�rio " << cont2.getSalario() << ", saldo total dispon�vel: R$ " << cont2.getSaldoTot() << endl;	
	}else{
		cout << cont2.getNome() << ", cc: " << cont2.getNum() << ", sal�rio " << cont2.getSalario() << ",\nsaldo insuficiente\nsaldo total dispon�vel: R$ " << cont2.getSaldoTot() << endl;
	}
	
	getline(cin, n);
	cin >> num;
	cont3 = Poupanca(n, num, 0, 51, 0.006);
	cin >> valor;
	cont3.depositar(valor);
	cin >> valor;
	retorno = cont3.sacar(valor);
	cont3.render();
	
	if(retorno == 0){
		cout << cont3.getNome() << ", cc: " << cont3.getNum() << ", saldo total dispon�vel: R$ " << cont3.getSaldoTot() << endl;	
	}else{
		cout << cont3.getNome() << ", cc: " << cont3.getNum() << ",\nsaldo insuficiente\nsaldo total dispon�vel: R$ " << cont3.getSaldoTot() << endl;
	}
		
	return 0;
}
