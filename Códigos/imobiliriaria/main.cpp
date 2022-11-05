#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	int t, pav, numq, adr, nvag, x, i;
	float p, ar, arc, cnd;
	string n, alovd;
	Imovel imov;
	Casa c;
	Apartamento a;
	Terreno terr;
	
	cin >> x;
	
	for(i=0; i<x; i++){
		cin >> t;
		switch(t){
			case 0:
				break;
			case 1:
				imov = c = Casa(t);
				cin >> p;
				getchar();
				getline(cin, alovd);
				cin >> pav;
				cin >> numq;
				cin >> ar;
				cin >> arc;
				
				c.lerAtributos(p, alovd, pav, numq, ar, arc);
				c.exibeAtributos();
				break;
			case 2:
				imov = a = Apartamento(t);
				cin >> p;
				getchar();
				getline(cin, alovd);
				cin >> ar;
				cin >> numq;
				cin >> adr;
				cin >> cnd;
				cin >> nvag;
				
				a.lerAtributos(p, alovd, ar, numq, adr, cnd, nvag);
				a.exibeAtributos();
				break;
			case 3:
				imov = terr = Terreno(t);
				cin >> p;
				getchar();
				getline(cin, alovd);
				cin >> ar;
				
				terr.lerAtributos(p, alovd, ar);
				terr.exibeAtributos();
				break;
		}
		
	}
	
	return 0;
}
