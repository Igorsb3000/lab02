#include "lab2_teste.h"

//c)
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
			cin.ignore();
			getline(cin, razao);
			empresa A(razao,cnpj);
			lista.push_back(A);
		}else{
			for(int i=0; i < (int)lista.size(); i++){
				if(cnpj == lista[i].getCnpj()){
					cout << "*CNPJ ja existe!! Tente novamente*" << endl;
					sucesso = 'n';
					break;
				}
			}
			if (sucesso == 's'){
				cout << "Digite a razao social da empresa: ";
				cin.ignore();
				getline(cin, razao);
				empresa A(razao,cnpj);
				lista.push_back(A);
			}
			
		}

		cout << endl;
	}while(sucesso!='s');
	
}
//d)
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
		for(i=0 ;i < (int)lista.size(); i++){
			for(auto it = lista[i].getListColab().begin(); it != lista[i].getListColab().end(); it++){
				//cout << "chegou 2" << endl;
				if((int)lista[i].getListColab().size() == 0){
					break; 
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
				cout << "*CPF ja cadastrado na empresa " << lista[i].getRazao() << "!! Tente novamente*" << endl << endl;
				break;
			}
		}

		if(existe != 's'){
			
			cout << "Digite o nome do funcionario: ";
			cin.ignore();
			getline(cin, nome);
			cout << "Digite o salario do funcionario: ";
			cin >> salario;
			cout << "Digite a data de admissao(DIA 'espaço' MES 'espaço' ANO): ";
			cin >> admissao[0] >> admissao[1] >> admissao[2];
			funcionario f(cpf,nome,salario,admissao);
			lista[posicao].setColaborador(f);
		}
	}
	
}
//f)
void aumento_salario(vector<empresa> &lista){
	float aumento;//aumento pode ser um decimal.
	int i, posicao;
	int cnpj = 0;
	double a_salario = 0;//antigo salario.
	double n_salario = 0; //novo salario.

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
		cout << "*Empresa nao encontrada!!Tente novamente*" << endl;
	}
	else{
		cout << "Digite X% o aumento que dará aos funcionários: ";
		cin >> aumento;
		cout << endl;
		

		for(auto it = lista[posicao].getListColab().begin(); it != lista[posicao].getListColab().end(); it++){
			if((int)lista[posicao].getListColab().size() == 0){
				cout << "*Nao existem funcionarios cadastrados na empresa!!*" << endl;
				break; 
			}
			else
			{

				a_salario = (*it).getSalario(); // lista[posicao].getSalario();
				n_salario =  a_salario + (aumento * a_salario)/100;


				(*it).setSalario(n_salario);
			}
		}	
		cout << "Aumento realizado com sucesso!!" << endl;
	}

}

//h)
float calcMedia(){
	int media;
	int n_f = funcionario::getContador_func();
	int n_e = empresa::getContador_empre();

	media  = n_f/n_e;
	return media;
}

//e)
void listarFunc(vector<empresa> &lista){
	int i, posicao, cnpj;
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
		cout << lista[posicao];
	}
}
//g)
void periodo_experiencia(vector<empresa> &lista){
	int cnpj;
	char existe_empresa = 'n';
	int posicao;
	double tempo;

	time_t now;
	time_t data_f;
	struct tm data_adm;

	time(&now);

	data_adm.tm_hour = 00;
	data_adm.tm_min = 00;
	data_adm.tm_sec = 00;

	cout << "Digite o CNPJ da empresa: ";
	cin >> cnpj;
	cout << endl;

	//verifica se a empresa existe.
	for(int i = 0; i < (int)lista.size(); i ++){
		if(lista[i].getCnpj() == cnpj){
			cout << "Empresa encontrada!!" << endl;
			existe_empresa = 's';
			posicao = i;
			break;
		}
	}
	if(existe_empresa != 's'){
		cout << "*Empresa nao encontrada!!Tente novamente*" << endl;
	}

	else{
		if((int)lista[posicao].getListColab().size() == 0){
			cout << "*Empresa nao possui funcionarios cadastrados!*" << endl;
		}
		else{
			cout << endl;
			cout << "**Funcionários em Período de Experiência da " << lista[posicao].getRazao() << "**"<< endl << endl;

			for(auto it = lista[posicao].getListColab().begin(); it != lista[posicao].getListColab().end(); it++){
				
				if((int)lista[posicao].getListColab().size() == 0 ){
					break;
				}else{
					data_adm.tm_mday = (*it).getAdmissao()[0] -1 ;
					data_adm.tm_mon = ((*it).getAdmissao()[1] - 1);
					data_adm.tm_year = ((*it).getAdmissao()[2] - 1900);
					data_f = mktime(&data_adm);

					tempo = difftime(now,data_f);
					//cout << " dif de tempo em segs: " << tempo << endl;
					tempo =(int)(tempo/86400);
					//cout <<"dif de tempo em dias: " << tempo << endl;
					
					if(tempo <= 90){						
						cout << "Nome: "<< (*it).getNome() << endl;
						cout << "CPF: " <<( *it).getCpf() << endl;
						cout << "Salário: R$ " << (*it).getSalario() << endl;
						cout << "Admissão: " << (*it).getAdmissao()[0] << "/" <<  (*it).getAdmissao()[1] << "/" << (*it).getAdmissao()[2] << endl;
						cout << endl;
					}
				}
				
			}
			

		}

	}
}