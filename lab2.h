#include <iostream>
#include <string>
#include <cstring>
#include <list>



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

class empresa{
	private:
		string razao;
		int cnpj;
		list<funcionario>colaboradores;
	public:
		string getRazao();
		void setRazao(string);
		int getCnpj();
		void setCnpj(int);
		funcionario* getColaborador(string);
		void setColaborador(funcionario);
};