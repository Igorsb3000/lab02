#include <iostream>
#include <string>

using namespace std;

class data{
	private: 
		int dia;
		int mes;
		int ano;
	public:
		data(int, int, int);
		void setData(int ,int , int);
		void getData(int &, int &, int &);
};

class funcionario{
	private:
		string nome;
		double salario;
		data admissao;
	public:
		void setNome(string);
		void setSalario(int);
		void getAdmissao(int &d, int &m, int &a);
		funcionario(string, double, const data &ad);
};
