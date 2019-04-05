#include "lab2_teste.h"

int funcionario::contador_func = 0;
int empresa::contador_empre = 0; 

int main(){
	vector<empresa>lista_empresas;
	char continuar = 'n';
	int opcao = 1;

	do{
		cout << "Deseja cadastrar uma empresa? (s/n)  ";
		cin >> continuar;
		cout << endl;

		if (continuar!='n'){
			cadastrar_emp(lista_empresas);
		}
	}while(continuar!='n');

	while(opcao != 0){
		cout << "Qual operacao deseja executar: "<< endl << "0 - Sair" << endl << "1 - Cadastrar Empresa" << endl << "2 - Cadastrar Funcionario" << endl << 
		"3 - Aumento de salário" << "4 - Verificar a media de funcionarios" << "5 - Listar os funcionarios de uma empresa" << endl;
		cin.ignore();
		cin >> opcao;
		
		switch (opcao){
			case 1:
				cadastrar_emp(lista_empresas);
				contador_empre++;
				break;
			case 2:
				cadastrar_func(lista_empresas);
				contador_func++;
				break;
			case 3:
				aumento_salario(lista_empresas);
			default:
				opcao = 0;
				cout << "Programa finalizado!!" << endl;
		}

	}
	for(int i=0; i < (int)lista_empresas.size(); i++){
		cout << lista_empresas[i];
	}
	return 0;
}
