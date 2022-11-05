#include "Apartamento.h"
#include <iostream>

Apartamento::Apartamento(){
}

Apartamento::Apartamento(int t)
: Imovel(t)
{
	tipo = t;
}

void Apartamento::setArea(float ar){
	area = ar;
}
void Apartamento::setNumq(int numq){
	numquart = numq;
}
void Apartamento::setAndar(int ard){
	andar = ard;
}
void Apartamento::setCond(float cnd){
	cond = cnd;
}
void Apartamento::setNumVag(int nvag){
	numvag = nvag;
}
		
float Apartamento::getArea(){
	return area;
}
int Apartamento::getNumq(){
	return numquart;
}
int Apartamento::getArd(){
	return andar;
}
float Apartamento::getCond(){
	return cond;
}
int Apartamento::getNumVag(){
	return numvag;
}
		
void Apartamento::lerAtributos(float p, std::string alovd, float ar, int numq, int ard, float cnd, int nvag){
	preco = p;
	alugouvend = alovd;
	area = ar;
	numquart = numq;
	andar = ard;
	cond = cnd;
	numvag = nvag;
}
void Apartamento::exibeAtributos(){
	std::cout << "Apartamento para " << alugouvend << ". " << area << "m2 de área, "
	<< numquart << " quartos, " << andar << " andar(es), " << cond << " de condomínio, "
	<< numvag << " vaga(s) de garagem. R$ " << preco << "." << std::endl;
}
