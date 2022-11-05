#include <iostream>
#include <string>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Retangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main(void) {
	int tp[100], j=0, i, x;
	float m, m2, mt[100];
	string figuras[100];
	Quadrado q;
	Retangulo r;
	Triangulo t;
	Circulo c;
	
	while(1){
		cin >> x;
		
		switch(x){
			case 0:
				j++;
				break;
			case 1:
				tp[j] = x;
				cin >> m;
				q.leiaAtributos(m);
				figuras[j] = q.getNome() + " de área ";
				mt[j] = q.areaTotal();
				j++;
				break;
			case 2:
				tp[j] = x;
				cin >> m;
				cin >> m2;
				r.leiaAtributos(m, m2);
				figuras[j] = r.getNome() + " de área ";
				mt[j] = r.areaTotal();
				j++;	
				break;
			case 3:
				tp[j] = x;
				cin >> m;
				cin >> m2;
				t.leiaAtributos(m, m2);
				figuras[j] = t.getNome() + " de área ";
				mt[j] = t.areaTotal();
				j++;	
				break;
			case 4:
				tp[j] = x;
				cin >> m;
				c.leiaAtributos(m);
				figuras[j] = c.getNome() + " de área ";
				mt[j] = c.areaTotal();
				j++;
				break;
		}
		
		if(x == 0){
			break;
		}		
	}
	
	for(i=0; i<j; i++){
		cout << figuras[i];
		switch(tp[i]){
			case 0:
				break;
			case 1:
				cout << mt[i] << endl;
				break;
			case 2:
				cout << mt[i] << endl;
				break;
			case 3:
				cout << mt[i] << endl;
				break;
			case 4:
				cout << mt[i] << endl;
				break;
		}		
	}	
	
	return 0;
}
