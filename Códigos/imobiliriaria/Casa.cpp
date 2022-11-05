#include "Casa.h"
#include <iostream>

Casa::Casa(){
}

Casa::Casa(int t)
: Imovel(t)
{
	tipo = t;
}

void Casa::setPav(int pav){
	pavimento = pav;
}
void Casa::setNumq(int numq){
	numquart = numq;
}
void Casa::setArea(float ar){
	area = ar;
}
void Casa::setAreaq(float arc){
	areac = arc;
}
		
int Casa::getPav(){
	return pavimento;
}
int Casa::getNumq(){
	return numquart;
}
float Casa::getArea(){
	return area;
}
float Casa::getAreaq(){
	return areac;
}

void Casa::lerAtributos(float p, std::string alovd, int pav, int numq, float ar, float arc){
	preco = p;
	alugouvend  = alovd;
	pavimento = pav;
	numquart = numq;
	area = ar;
	areac = arc;
}

void Casa::exibeAtributos(){
	std::cout << "Casa para " << alugouvend << ". " << pavimento << " pavimentos, " << numquart << " quartos, "
	<< area << "m2 de área de terreno e " << areac << "m2 de área construída. R$ " << preco << "." << std::endl;	
}	
