#include "Data.h"
#include <iostream>

using namespace std;

Data::Data(){
	dia = 1;
	mes = 1;
	ano = 1;
}

int Data::getDia(){
	return dia;	
}
int Data::getMes(){
	return mes;
}
int Data::getAno(){
	return ano;
}
		
void Data::setDia(int d){
	dia = d;
}
void Data::setMes(int m){
	mes = m;
}
void Data::setAno(int a){
	ano = a;
}

void Data::printData(int dia, int mes, int ano){
	switch(mes){
		case 1:
			cout << dia << " de Janeiro de " << ano << endl;
			break;
		case 2:
			cout << dia << " de Fevereiro de " << ano << endl;
			break;
		case 3:
			cout << dia << " de Março de " << ano << endl;
			break;
		case 4:
			cout << dia << " de Abril de " << ano << endl;
			break;
		case 5:
			cout << dia << " de Maio de " << ano << endl;
			break;
		case 6:
			cout << dia << " de Junho de " << ano << endl;
			break;
		case 7:
			cout << dia << " de Julho de " << ano << endl;
			break;
		case 8:
			cout << dia << " de Agosto de " << ano << endl;
			break;
		case 9:
			cout << dia << " de Setembro de " << ano << endl;
			break;
		case 10:
			cout << dia << " de Outubro de " << ano << endl;
			break;
		case 11:
			cout << dia << " de Novembro de " << ano << endl;
			break;
		case 12:
			cout << dia << " de Dezembro de " << ano << endl;
			break;	
		default:
			cout << dia << " de Indefinido de " << ano << endl;	
	}	
}
