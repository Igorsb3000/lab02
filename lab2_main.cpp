#include "lab2.h"

int main(){
	//funcionario R;
	
	//c)
	string razao;
	int cnpj;



	//Vetor de empresas
	vector<empresa>Empresas;
	
	char resposta;
	int numero_empresas;
	int i=0;

	
	do{
		cout << "Deseja criar uma empresa ? s/n " << endl;
		cin >> resposta;

		if(resposta != 'n'){
			cout << "Digite a razao social da empresa:" << endl;
			cin >> razao; 
			
			cout << "Digite o CNPJ da empresa:" << endl;
			cin >>  cnpj;

			Empresas.push_back(empresa(razao, cnpj));

			i++;
			cout << "Empresa cadastrada!" << endl;
		}

		
		
	}while(resposta != 'n');


	//Empresas.push_back(empresa("sadia", 12344));
	cout << endl << endl;


	long double cpf;
	vector<long double>lista_CPF;
	int ok = 1;
	int contador = 0;
	//d)
	do{
		cout << "Deseja adicionar um novo funcinário ? s/n" << endl;
		//cin.ignore();
		cin >> resposta;

		if(resposta != 'n'){
			cout << "Digite o CPF para verificação: " << endl;
			cin >> cpf;
			if(contador == 0){
				lista_CPF.push_back(cpf);
				contador++;
			}else{
				for(int i=0; i< (int)lista_CPF.size(); i++){
					if(cpf != lista_CPF[i]){
						lista_CPF.push_back(cpf);
						cout << lista_CPF[i] << endl;
						cout << "CPF válido!" << endl;
						ok = 1;
						break;

					}else{
						cout << "CPF inválido, funcionário já cadastrado!" << endl;
						ok = 0;
						break;
						
					}
				}
			}
			
			if(ok == 1){
				cin >> Empresas[i-1];
			}
			
		}

	}while(resposta != 'n');

	

	/*cout << "Digite o nome do funcionario que deseja pesquisar:";
	cin >> nome_main;

	if(A.getColaborador(nome_main) != nullptr){
		cout << "Empresa: " << A.getRazao() << endl;
		cout <<  "Funcionario:" << endl << A.getColaborador(nome_main)->getNome() << endl;
		cout << "Salario: " << A.getColaborador(nome_main)->getSalario() << endl;
		cout << "Data de admissao:" << A.getColaborador(nome_main)->getAdmissao()[0] << "/" << A.getColaborador(nome_main)->getAdmissao()[1] << "/" << A.getColaborador(nome_main)->getAdmissao()[2] << endl;
	} */
	

	//cout << A; //TESTE

	//Imprimindo todas as empresas e seus funcionários
	for(int i=0; i< (int)Empresas.size(); i++){
		cout << Empresas[i] << endl;

	} 
	
	return 0;
}
