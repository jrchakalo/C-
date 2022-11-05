#include <iostream>
#include "Pessoa.h"
#include <string>

using namespace std;

int main() {
	Pessoa indv1, indv2;
	
	getline(cin, indv1.nome);
	cin >> indv1.idade;
	getchar();
	getline(cin, indv1.numero);
	
	getline(cin, indv2.nome);
	cin >> indv2.idade;
	getchar();
	getline(cin, indv2.numero);
	
	cout << indv1.nome << ", " << indv1.idade << ", " << indv1.numero << "\n";
	cout << indv2.nome << ", " << indv2.idade << ", " << indv2.numero << "\n";
	
	return 0;
}
