#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"
#include <string>

using namespace std;

int main(void){
	Conta cont;
	ContaEspecial contEs;
	string nome;
	int numero;
	double salario, valor;
	
	getline(cin, nome);
	cin >> numero;
	cin >> salario;
	cont = Conta(nome, numero, salario);
	cin >> valor;
	cont.depositar(valor);
	cin >> valor;
	cont.sacar(valor);
	getchar();
	
	getline(cin, nome);
	cin >> numero;
	cin >> salario;
	contEs = ContaEspecial(nome, numero, salario);
	cin >> valor;
	contEs.depositar(valor);
	cin >> valor;
	contEs.sacar(valor);
	

	cout << cont.getNome() << ", cc: " << cont.getNum() << ", salário " << cont.getSalMen() << ", saldo total disponível: R$ " << cont.saldoTotalDisponivel() << endl;
	cout << contEs.getNome() << ", cc: " << contEs.getNum() << ", salário " << contEs.getSalMen() << ", saldo total disponível: R$ " << contEs.saldoTotalDisponivel() << endl;

    return 0;
}
