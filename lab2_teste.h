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
		void setSalario(double s);
		//Métodos getters
		int getCpf();
		string getNome();
		double getSalario();
		int* getAdmissao();

		static int contador_func;
		static int getContador_func();


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
		void setColaborador(funcionario);
		string getRazao();
		int getCnpj();
		list<funcionario> & getListColab();
		//Métodos de sobrecarga 
		friend ostream& operator << (ostream &out, empresa &e);
		//Método para desalocar memoria

		static int contador_empre;
		static int getContador_empre();
		
		
};


void cadastrar_emp(vector<empresa> &lista);
void cadastrar_func(vector<empresa> &lista);
void aumento_salario(vector<empresa> &lista);
float calcMedia();
void listarFunc(vector<empresa> &lista);
