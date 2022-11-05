#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Retangulo.h"
#include "Triangulo.h"
#include "Circulo.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	int t, i=0, j=0;
	FiguraGeometrica *figura[100];
	
	while(1){
		cin >> t;
		
		if(t == 0){
			break;
		}
		
		switch(t){
			case 1:	
				figura[j] = new Quadrado(t);
				break;
			case 2:
				figura[j] = new Retangulo(t);
				break;	
			case 3:
				figura[j] = new Triangulo(t);	
				break;		
			case 4:
				figura[j] = new Circulo(t);
				break;
		}
		
		figura[j] -> lerAtributosArea();
		j++;	
	}
	
	for(i=0; i<j; i++){
		cout << figura[i]->getNome() << " polimórfico de área " << figura[i]->calcularArea() << endl;
	}
	
	
	return 0;
}
