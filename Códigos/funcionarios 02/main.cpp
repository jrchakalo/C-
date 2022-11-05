#include <iostream>
#include "Funcionarios.h"
#include <string>

using namespace std;

int main(void){
	int quant, i;
	float s, result, result2;
	string n, sb;
	
	cin >> quant;
	getchar();
		
	Funcionarios trab[quant];
	
	for(i = 0; i < quant; i++){
		cin >> n;
		cin >> sb;
		cin >> s;
		trab[i] = Funcionarios(n, sb, s);
	}
	
	for(i = 0; i < quant; i++){
		n = trab[i].getNome();
		sb = trab[i].getSobrenome();
		s = trab[i].getSalario();
		
		result = trab[i].salarioAnual(s);
		cout << n << " " << sb << " - " << s << " - " << result << "\n";
		result2 = trab[i].aumentoSalario(0.1);
		cout << result2 << "\n";
	}
    return 0;
}
