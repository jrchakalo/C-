#include <iostream>
#include "Invoice.h"

using namespace std;

int main() {
	Invoice fat1, fat2;
	float total1, total2;
	
	cin >> fat1.num;
	getchar();
	getline(cin, fat1.desc);
	cin >> fat1.quant;
	cin >> fat1.preco;
	
	if (fat1.quant < 0){
		fat1.quant = 0;
	}
	if (fat1.preco < 0){
		fat1.preco = 0.0;
	}
	
	cin >> fat2.num;
	getchar();
	getline(cin, fat2.desc);
	cin >> fat2.quant;
	cin >> fat2.preco;
	
	if (fat2.quant < 0){
		fat2.quant = 0;
	}
	if (fat2.preco < 0){
		fat2.preco = 0.0;
	}
	
	total1 = fat1.faturaTotal(fat1.quant, fat1.preco);
	total2 = fat2.faturaTotal(fat2.quant, fat2.preco);
	
	cout << fat1.num << " - " << fat1.desc << " - " << fat1.quant << " - " << fat1.preco << " - " << total1 << endl;
	cout << fat2.num << " - " << fat2.desc << " - " << fat2.quant << " - " << fat2.preco << " - " << total2 << endl;
	
	return 0;
}
