#include <iostream>

using namespace std;

int main(void){
	float salario, emprest, parcela;
	int prest;
	
	do{	
		cin >> salario;
	}while(salario <= 0);
	
	do{	
		cin >> emprest;
	}while(salario <= 0);
	
	do{	
		cin >> prest;
	}while(salario <= 0);
	
	parcela = emprest / prest;
	
	if(parcela <= salario * 0.3){
		cout << "Emprestimo pode ser concedido"	 << endl;
	}else{
		cout << "Emprestimo nao pode ser concedido" << endl;
	}	
	

    return 0;
}
