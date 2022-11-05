#include "Terreno.h"
#include <iostream>

Terreno::Terreno(){
}

Terreno::Terreno(int t)
: Imovel(t)
{
	tipo = t;
}

void Terreno::setArea(float ar){
	area = ar;
}
float Terreno::getArea(){
	return area;
}
		
void Terreno::lerAtributos(float p, std::string alovd, float ar){
	preco = p;
	alugouvend = alovd;
	area = ar;
}
void Terreno::exibeAtributos(){
	std::cout << "Terreno para " << alugouvend << ". " << area << "m2 de área de terreno. R$ " << preco << "." << std::endl;
}
