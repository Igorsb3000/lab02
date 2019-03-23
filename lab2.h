#include <iostream>
#include <string>
#include <cstring>


using namespace std;


class FUNCIONARIO{
	private:
		string nome;
		double salario;
		int admissao[3];
	public:
		void setNome(string);
		void setSalario(int);
		void getAdmissao(int admissao[], int tamanho);
};
