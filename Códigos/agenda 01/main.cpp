#include <iostream>
#include <string> 
#include "Endereco.h"
#include "Pessoa.h"

using namespace std;

int main (void){
	string r, b, c, e, cep, n, t;
	Endereco ende;
	int num, x, i;
	
	cin >> x;
	getchar();
	
	Pessoa indv[x];
	
	for(i=0; i<x; i++){
		getline(cin, n);
		getline(cin, t);
		getline(cin, r);
		cin >> num;
		getchar();
		getline(cin, b);
		getline(cin, c);
		getline(cin, e);
		getline(cin, cep);
		
		ende = Endereco(r, num, b, c, e, cep);
		
		indv[i] = Pessoa(n, ende, t);			
	}
	
	for(i=0; i<x; i++){
		cout << indv[i].toString() << endl;
	}
	
}
