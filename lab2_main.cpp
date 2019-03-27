#include "lab2.h"

int main(){
	//funcionario R;
	
	//c)
	string razao;
	int cnpj;

	/*
	string nome_main;
	double salario_main;
	int *admissao_main = new int[3];

	
	cout << "Funcionario R:" << endl;
	cout << "Nome: " << R.getNome() << endl;
	cout << "Salario: " << R.getSalario() << endl;
	cout << "Dia: " << R.getAdmissao()[0] << endl;
	cout << "Mes: " << R.getAdmissao()[1] << endl;
	cout << "Ano: " << R.getAdmissao()[2] << endl;
	cout << endl << endl;

	*/
	cout << "Digite a razao social da empresa:" << endl;
	cin >> razao; 
	
	//A.setRazao(razao);
	cout << "Digite o CNPJ da empresa:" << endl;
	cin >>  cnpj;
	//A.setCnpj(cnpj);
	//A.setColaborador(R);	
	empresa A(razao,cnpj);

	cout << endl << endl;



	char resposta = 'n';
	int contador=0;

	//d)
	do{
		cout << "Deseja adicionar um novo funcinário ? s/n" << endl;
		cin.ignore();
		cin >> resposta;

		if(resposta != 'n'){
			/*cout << "Digite o nome do funcionario: " << endl;
			cin.ignore();
			getline(cin, nome_main);

			cout << "Digite o salario do funcionario: " << endl;
			cin >> salario_main;

			cout << "Digite a data de admissao do funcionario: ";
			cin >> admissao_main[0] >> admissao_main[1] >> admissao_main[2];

			funcionario R(nome_main, salario_main, admissao_main);*/

			cin >> A;
			contador++;

		}


	}while(resposta != 'n');

	//for(int i=0; i<A->colaboradores.size(); i++){
	//	cout << A.colaboradores.front() << endl;
	//}

	

	/*cout << "Digite o nome do funcionario que deseja pesquisar:";
	cin >> nome_main;

	if(A.getColaborador(nome_main) != nullptr){
		cout << "Empresa: " << A.getRazao() << endl;
		cout <<  "Funcionario:" << endl << A.getColaborador(nome_main)->getNome() << endl;
		cout << "Salario: " << A.getColaborador(nome_main)->getSalario() << endl;
		cout << "Data de admissao:" << A.getColaborador(nome_main)->getAdmissao()[0] << "/" << A.getColaborador(nome_main)->getAdmissao()[1] << "/" << A.getColaborador(nome_main)->getAdmissao()[2] << endl;
	}*/
	cout << A;

	//delete[] admissao_main;
	/*for(auto it = A.colaboradores.begin(); it != A.colaboradores.end(); it++){
		delete [] (*it).admissao;
	}*/
	
	return 0;
}
