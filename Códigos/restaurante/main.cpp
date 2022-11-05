#include <iostream>
#include <string>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "Restaurante.h"

using namespace std;

int main(void) {
	int num, quant, mesa, i;
	float pr;
	string desc;
	Restaurante r;
	MesaDeRestaurante m;
	
	while(1){
		cin >> num;
		if(num < 0){
			break;
		}
		getchar();
		getline(cin, desc);
		cin >> quant;
		cin >> pr;
		cin >> mesa;
		
		r.adicionarPedido(Pedido(num, desc, quant, pr), mesa);
	}
	
	for(i=0; i<10; i++){
		m = r.getMesa(i);
		if(m.calculaTotal() > 0){
			cout << "Mesa " << i << endl;
			m.exibeConta();
			cout << "Total: R$ " << m.calculaTotal() << "\n" << endl;
		}	
	}
	
	cout << "Total Restaurante: R$ " << r.calculaTotalRestaurante() << endl;
	
	return 0;
}
