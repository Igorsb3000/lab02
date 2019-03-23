#include "lab2.h"

int main(){
	int dia, mes, ano;
	funcionario joao("joao", 1230.50, data(13,05,1982));
	joao.getAdmissao(dia,mes,ano);
	cout << "dia = " << dia << ", mes = " << mes << ", ano = " << ano << "." << endl;
	return 0;
}
