#include "lab2.h"

data::data(int d, int m, int a){
	dia = d;
	mes = m;
	ano = a;
}

void data::setData(int d, int m,int a){
	dia = d;
	mes = m;
	ano = a;
}

void data::getData(int &d, int &m, int &a){
	d = dia;
	m = mes;
	a = ano;
}

funcionario::funcionario(string n, double s, const data &ad)
		:admissao(ad)
{
	nome = n;
	salario = s;
}

void funcionario::setNome(string n){
	nome = n;
}

void funcionario::setSalario(int s){
	salario = s;
}

void funcionario::getAdmissao(int &d, int &m, int &a){
	admissao.getData(d,m,a);
}