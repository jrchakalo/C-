#ifndef DATA_H
#define DATA_H

class Data
{
	public:
		Data();
		Data(int d, int m, int a);
		int getDia();
		int getMes();
		int getAno();
		int diasMes(int mes);
		
		void setDia(int d);
		void setMes(int m);
		void setAno(int a);
		void avancaDia();
		
	private:
		int dia;
		int mes;
		int ano;
};

#endif
