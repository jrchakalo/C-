#include <iostream>
#include "Funcionarios.h"
#include <string>

using namespace std;

int main(void){
	int quant, i;
	float result;
	
	cin >> quant;
	getchar();
		
	Funcionarios trab[quant];
	
	for(i = 0; i < quant; i++){
		getline(cin, trab[i].nome);
		getline(cin, trab[i].sobrenome);
		cin >> trab[i].salario;
		getchar();
	}
	
	for(i = 0; i < quant; i++){
		result = trab[i].salarioAnual(trab[i].salario);
		cout << trab[i].nome << " " << trab[i].sobrenome << " - " << trab[i].salario << " - " << result << "\n";
	}
    return 0;
}
