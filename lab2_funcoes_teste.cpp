#include "lab2_teste.h"


void cadastrar_emp(vector<empresa> &lista){
	char sucesso;
	int cnpj;
	string razao;
	do{
		sucesso = 's';
		cout << "Digite o CNPJ da empresa: ";
		cin >> cnpj;
		if((int)lista.size() == 0){
			cout << "Digite a razao social da empresa: ";
			cin >> razao;
			cout << endl;
			empresa A(razao,cnpj);
			lista.push_back(A);
		}else{
			for(int i=0; i < (int)lista.size(); i++){
				if(cnpj == lista[i].getCnpj()){
					cout << "CNPJ ja existe!! Tente novamente. " << endl;
					sucesso = 'n';
					break;
				}
			}
			if (sucesso == 's'){
				cout << "Digite a razao social da empresa: ";
				cin >> razao;
				cout << endl;
				empresa A(razao,cnpj);
				lista.push_back(A);
			}
		}
		
	}while(sucesso!='s');
}

void cadastrar_func(vector<empresa> &lista){
	int cpf = 0;
	int cnpj = 0;
	int posicao = 0;
	int i;
	string nome;
	int admissao[] = {0,0,0};
	double salario = 0.0;
	char existe = 'n';
	char existe_empresa = 'n';
	cout << "Digite o CNPJ da empresa: ";
	cin >> cnpj;
	cout << endl;

	//verifica se a empresa existe.
	for(i = 0; i < (int)lista.size(); i ++){
		if(lista[i].getCnpj() == cnpj){
			cout << "Empresa encontrada!!" << endl;
			existe_empresa = 's';
			posicao = i;
			break;
		}
	}
	if(existe_empresa != 's'){
		cout << "Empresa nao encontrada!!Tente novamente." << endl;
	}
	else{
		existe = 'n';
		//verifica se o cnpj ja foi cadastrado em alguma empresa
		cout << "Digite o CPF do funcionario: ";
		cin >> cpf;
		cout << endl;
		for(i=0 ;i < (int)lista.size(); i++){
			//cout << "chegou 1" << endl;
			for(auto it = lista[i].getListColab().begin(); it != lista[i].getListColab().end(); it++){
				//cout << "chegou 2" << endl;
				if((int)lista[i].getListColab().size() == 0){
					break; 
					//Primeiro cadastrado
				}
				else if((*it).getCpf() == cpf){
					existe = 's';//flag
					//Já existe
					break;
				}
				else{
					existe = 'n'; //ACHO QUE ERRO ERA AQUI!!
					break;
				}
			}
			
			if(existe == 's'){
				cout << "CPF ja cadastrado na empresa " << lista[i].getRazao() << "!! Tente novamente." << endl << endl;
				break;
			}
		}

		if(existe != 's'){
			//cout << "chegou 3" << endl;
			cout << "Digite o nome do funcionario: ";
			cin >> nome;
			cout << endl;
			cout << "Digite o salario do funcionario: ";
			cin >> salario;
			cout << endl;
			cout << "Digite a data de admissao(dia mes ano): ";
			cin >> admissao[0] >> admissao[1] >> admissao[2];
			funcionario f(cpf,nome,salario,admissao);
			lista[posicao].setColaborador(f);//teste precisa mudar.
		}
	}
}
/*
void aumento_salario(vector<empresa> &lista){
	int aumento, i;
	int cnpj = 0;
	
	cout << "Digite o CNPJ da empresa: ";
	cin >> cnpj;
	cout << endl;

	//verifica se a empresa existe.
	for(i = 0; i < (int)lista.size(); i ++){
		if(lista[i].getCnpj() == cnpj){
			cout << "Empresa encontrada!!" << endl;
			existe_empresa = 's';
			posicao = i;
			break;
		}
	}
	if(existe_empresa != 's'){
		cout << "Empresa nao encontrada!!Tente novamente." << endl;
	}
	else{
		existe = 'n';
		cout << "Digite X% o aumento que dará aos funcionários: " << endl;
		cin >> aumento;
		

		//PAREI AQUI!!!!!!!!!!!!
		for(i=0 ;i < (int)lista.size(); i++){
			
			for(auto it = lista[i].getListColab().begin(); it != lista[i].getListColab().end(); it++){
			
				if((int)lista[i].getListColab().size() == 0){
					break; 
					//Primeiro cadastrado
				}
				else if((*it).getCpf() == cpf){
					existe = 's';
				
					break;
				}
				else{
					existe = 'n';
					break;
				}
			}
			
			if(existe == 's'){
				cout << "CPF ja cadastrado na empresa " << lista[i].getRazao() << "!! Tente novamente." << endl << endl;
				break;
			}
		}
		






	}

}
*/
