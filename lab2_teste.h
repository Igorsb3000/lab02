#include <iostream>
#include <string>
#include <cstring>
#include <list>
#include <vector>
//#include <algorithm>



using namespace std;


//a)
class funcionario{
	private:
		long double cpf;
		string nome;
		double salario;
		int admissao[3];
	public:
		//Costrutores
		funcionario();
		funcionario(int cpf, string nome, double salario, int *admissao);
		//Métodos setters
		void setCpf(int cpf);
		void setNome(string n);
		void setSalario(double s);
		void setAdmissao(int admissao[]);
		//Métodos getters
		int getCpf();
		string getNome();
		double getSalario();
		int* getAdmissao();


};
//b)
class empresa{
	private:
		string razao;
		int cnpj;
		list<funcionario>colaboradores;
	public:
		//Construtores
		empresa();
		empresa(string	r, int c);
		//Métodos setters
		void setRazao(string);
		void setCnpj(int);
		void setColaborador(funcionario);
		//Métodos getters
		string getRazao();
		int getCnpj();
		funcionario* getColaborador(string);
		list<funcionario> getListColab();
		//Métodos de sobrecarga 
		friend ostream& operator << (ostream &out, empresa &e);
		//friend istream& operator >> (istream &in, empresa &e);
		//Método para desalocar memoria
		
		
};

void cadastrar_emp(vector<empresa> &lista);
void cadastrar_func(vector<empresa> &lista);
