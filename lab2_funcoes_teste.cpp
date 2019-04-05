#include "lab2_teste.h"

void cadastrar_emp(vector<empresa> &lista){
	char sucesso;
	int cnpj;
	string razao;
	do{
		sucesso = 's';
		cout << "Digite o CNPJ da empresa: ";
		cin >> cnpj;
		cout << endl;
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
	int cpf;
	int cnpj;
	int posicao;
	int i;
	string nome;
	int admissao[3];
	double salario;
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

void aumento_salario(vector<empresa> &lista){
	float aumento;//aumento pode ser um decimal.
	int i, posicao;
	int cnpj = 0;
	double a_salario = 0;//antigo salario.
	double n_salario = 0; //novo salario.

	char existe_empresa = 'n';//faltou declarar as variaveis.
	//char existe_funcionario;//criei essa existe_funcionario no lugar da existe pra n ficar confuso.
	
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
		//existe_funcionario = 'n';
		cout << "Digite X% o aumento que dará aos funcionários: ";
		cin >> aumento;
		cout << endl;
		

		for(auto it = lista[posicao].getListColab().begin(); it != lista[posicao].getListColab().end(); it++){
			if((int)lista[posicao].getListColab().size() == 0){
				break; 
			}
			else{ 

				//lista[posicao].getListColab().remove_if(it);
				//lista[posicao].erase(*it);
				cout << lista[0] << endl;



				//cout << "passou 2" << endl;
				a_salario = (*it).getSalario(); // lista.getSalario();
				cout << "antigo salario = " << a_salario << endl;
				n_salario =  a_salario + (aumento * a_salario)/100;
				cout << "novo salario = " << n_salario << endl;


				(*it).setSalario(n_salario);

				cout << (*it).getCpf() << endl;
				cout << (*it).getNome()<< endl;
				cout << (*it).getSalario() << endl;
				cout << (*it).getAdmissao()[0] << endl;
				cout << (*it).getAdmissao()[1] << endl;
				cout << (*it).getAdmissao()[2] << endl;


				long double cpf;
				string nome;
				double salario;
				int admissao[3];
			
				nome = (*it).getNome();
				salario = (*it).getSalario();
				cpf = (*it).getCpf();
				admissao[0] = (*it).getAdmissao()[0];
				admissao[1] = (*it).getAdmissao()[1];
				admissao[2] = (*it).getAdmissao()[2];

				//it = lista[posicao].getListColab().[posicao];
				//it.erase(*it);

				//FALTA TERMINAR DE EXCLUIR O FUCNIONARIO
				//lista[posicao].colaboradores(posicao).erase(it);


				//ADICIONA-LO NOVAMENTE COM O SALARIO ATUALIZADO
				funcionario f(cpf,nome,salario,admissao);
				//lista[posicao].colaboradores = f;
				//lista[posicao].setColaborador2(f);//teste precisa mudar.

				cout << "Salario novo lista: " << (*it).getSalario() << endl;
				cout << "Pasei 2" << endl;
				cout << "salario do funcionario: " << (*it).getSalario() << endl;
				break;
				//lista.getListColab(++);
				//existe_funcionario = 'n';
			}
		}	

		cout << "Aumento realizado com sucesso!!" << endl;
	}

}


