#include <iostream>
#include <string>
#include <cstring>


using namespace std;


class funcionario{
	private:
		string nome;
		double salario;
		int *admissao;
	public:
		void setNome(string n);
		void setSalario(double s);
		void setAdmissao(int admissao[]);

		string getNome();
		double getSalario();
		int* getAdmissao();

};