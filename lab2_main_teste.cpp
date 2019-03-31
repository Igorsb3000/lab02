#include "lab2.h"


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
		cout << "Qual operacao deseja executar: "<< endl << "1 - cadastrar empresa" << endl << "2 - cadastrar funcionario" << endl;
		cin.ignore();
		cin >> opcao;
		
		switch (opcao){
			case 1:
				cadastrar_emp(lista_empresas);
				break;
			case 2:
				cadastrar_func(lista_empresas);
				break;
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
