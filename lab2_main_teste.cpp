#include "lab2_teste.h"

//Inicializando os membross estáticos
int funcionario::contador_func = 0;
int empresa::contador_empre = 0; 

int main(){
	vector<empresa>lista_empresas;
	char continuar = 'n';
	int opcao = 1;
	float media;
	//O cadastro da empresa é importante que seja feito primeiro
	do{
		cout << "Deseja cadastrar uma empresa? (s/n)  ";
		cin >> continuar;
		cout << endl;

		if (continuar!='n'){
			cadastrar_emp(lista_empresas);
		}
	}while(continuar!='n');

	while(opcao != 0){
		cout << endl << "*** MENU INICIAL*** "<< endl << "0 - Sair" << endl << "1 - Cadastrar Empresa" << endl << "2 - Cadastrar Funcionário" << endl << "3 - Aumento de Salário" << endl << "4 - Verificar a Média de Funcionários" << endl << "5 - Listar os Funcionários" << endl << "6 - Funcionários em Período de Experiência" << endl;
		cin >> opcao;
		
		switch (opcao){
			case 1:
				cadastrar_emp(lista_empresas);
				break;
			case 2:
				cadastrar_func(lista_empresas);
				break;
			case 3:
				aumento_salario(lista_empresas);
				break;
			case 4:
				media = calcMedia();
				cout << "Nº de Empresas: " << empresa::getContador_empre() << endl;
				cout << "Nº de Funcionários: " << funcionario::getContador_func() << endl;
				cout << "Média de Funcionários por Empresas: " << media << endl;
				break;
			case 5:
				listarFunc(lista_empresas);
				break;
			case 6:
				periodo_experiencia(lista_empresas);
				break;
			default:
				opcao = 0;
				cout << "Programa finalizado!!" << endl;
		}

	}
	for(int i=0; i < (int)lista_empresas.size(); i++){
		cout << lista_empresas[i];
	}

	cout << "Quantidade de empresas: " << empresa::getContador_empre() << endl;
	cout << "Quantidade de funcionarios: " << funcionario::getContador_func() << endl;
	return 0;
}