#ifndef DATA_H
#define DATA_H

class Data
{
	public:
		Data();
		void printData(int dia, int mes, int ano);
		int getDia();
		int getMes();
		int getAno();
		
		void setDia(int d);
		void setMes(int m);
		void setAno(int a);
	private:
		int dia;
		int mes;
		int ano;
};

#endif
