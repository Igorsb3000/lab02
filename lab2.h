#include <iostream>
#include <string>
#include <cstring>
#include <list>
//#include <vector>
//#include <algorithm>



using namespace std;


//a)
class funcionario{
	private:
		string nome;
		double salario;
		int *admissao;
	public:
		//Costrutores
		funcionario();
		funcionario(string nome, double salario, int *admissao);
		//Métodos setters
		void setNome(string n);
		void setSalario(double s);
		void setAdmissao(int admissao[]);
		//Métodos getters
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
		empresa(string	r,int c);
		//Métodos setters
		void setRazao(string);
		void setCnpj(int);
		void setColaborador(funcionario);
		//Métodos getters
		string getRazao();
		int getCnpj();
		funcionario* getColaborador(string);
		//Métodos de sobrecarga 
		friend ostream& operator << (ostream &out, empresa &e);
		friend istream& operator >> (istream &in, empresa &e);
		//Método para desalocar memoria
		
		
};
