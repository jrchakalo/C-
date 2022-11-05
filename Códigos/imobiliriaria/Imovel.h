#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>

class Imovel
{
	public:
		Imovel();
		Imovel(int t);
		
		void exibeAtributos();
		void lerAtributos();
		
		void setNom(std::string n);
		void setPr(float p);
		void setAl(std::string alovd);
		
		std::string getNom();
		float getPr();
		std::string getAl();
		
	protected:
		int tipo;
		std::string nome;
		float preco;
		std::string alugouvend;
};

#endif
