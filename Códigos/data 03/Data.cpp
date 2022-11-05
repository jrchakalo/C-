#include "Data.h"
#include <iostream>
#include <string>

using namespace std;

Data::Data(){
}

Data::Data(int d, int m, int a){
	dia = d;
	mes = m;
	ano = a;
	
	if (mes > 12){
		cout << "Atributo mês Inválido" << endl;
		mes = 1;
	}
	
	if (dia > diasMes(mes)){
		cout << "Atributo dia Inválido" << endl;
		dia = 1;
	}	
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

int Data::diasMes(int mes){
	switch(mes){
		case 1:
			return 31; 
			break;
		case 2:
			return 28;
			break;
		case 3:
			return 31;
			break;
		case 4:
			return 30;
			break;
		case 5:
			return 31;
			break;
		case 6:
			return 30;
			break;
		case 7:
			return 31;
			break;
		case 8:
			return 31;
			break;
		case 9:
			return 30;
			break;
		case 10:
			return 31;
			break;
		case 11:
			return 30;
			break;
		case 12:
			return 31;
			break;	
		default:
			break;
	}	
}

void Data::avancaDia(){
	if(dia < diasMes(mes)){
		dia++;
	}else{
		if(mes < 12){
			mes++;
			dia = 1;
		}else{
			ano++;
			mes = 1;
			dia = 1;
		}
	}
}
