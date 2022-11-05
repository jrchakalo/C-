#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H
#include <string>

using namespace std;

class Funcionarios
{
	public:
		Funcionarios();
		Funcionarios(std::string nome, std::string sobrenome, float salario);
		salarioAnual(float salario);
		aumentoSalario(float percent);
		float per;
		
		std::string getNome();
		std::string getSobrenome();
		float getSalario();
		
		setNome(std::string n);
		setSobrenome(std::string sb);
		setSalario(float s);
		
	private:
		string nome;
		string sobrenome;
		float salario;
};

#endif
