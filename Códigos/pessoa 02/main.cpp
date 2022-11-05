#include <iostream>
#include "Pessoa.h"
#include "Endereco.h"
#include <string>

using namespace std;

int main() {
	int n, i;
	int num;
	Endereco e;
	string nome, telefone, busca, r, b, c, est, cep;
	bool pesqui;

	cin >> n;
	getchar();

	Pessoa indv[n];

	for(i=0 ; i<n; i++){
		getline(cin, nome);
		getline(cin, telefone);
		getline(cin, r);
		cin >> num;
		getchar();
		getline(cin, b);
		getline(cin, c);
		getline(cin, est);

		e = Endereco(r, num, b, c, e, cep);
		indv[i] = Pessoa(nome, e telefone);
	}

	cin >> busca;

	for(i=0; i<n; i++){
		if(indv[i].getNome().find(busca) != string::npos){
			pesqui = true;
			cout << indv[i].getNome() << ", "  << ", " << indv[i].getTelefone() << "\n";

		}
	}

	if(!pesqui){
		cout << "Pessoa não encontrada\n";
	}

	return 0;
}

