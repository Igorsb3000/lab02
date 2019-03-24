#include "lab2.h"

int main(){
	funcionario R;
	funcionario vetor[3];
	empresa A;
	string nome_main;
	string razao;
	int cnpj;
	double salario_main;
	int admissao_main[3];

	cout << "Digite o nome do funcionario: " << endl;
	//cin.ignore();
	getline(cin, nome_main);

	cout << "Digite o salario do funcionario: " << endl;
	cin >> salario_main;

	cout << "Digite a data de admissao do funcionario: ";
	cin >> admissao_main[0] >> admissao_main[1] >> admissao_main[2];

	for(int i = 0; i<3; i++){
		cout << admissao_main[i] << endl;
	}
	R.setNome(nome_main);
	R.setSalario(salario_main);
	R.setAdmissao(admissao_main);
	

	cout << "Funcionario R:" << endl;
	cout << "Nome: " << R.getNome() << endl;
	cout << "Salario: " << R.getSalario() << endl;
	cout << "Dia: " << R.getAdmissao()[0] << endl;
	cout << "Mes: " << R.getAdmissao()[1] << endl;
	cout << "Ano: " << R.getAdmissao()[2] << endl;
	cout << endl << endl;
	cout << "Digite a razao social da empresa:" << endl;
	cin >> razao;

	A.setRazao(razao);
	cout << "Digite o CNPJ da empresa:" << endl;
	cin >>  cnpj;
	A.setCnpj(cnpj);
	A.setColaborador(R);	
	cout << endl << endl;

	cout << "Digite o nome do funcionario que deseja pesquisar:";
	cin >> nome_main;

	if(A.getColaborador(nome_main) != nullptr){
		cout << "Empresa: " << A.getRazao() << endl;
		cout <<  "Funcionarios:" << endl << A.getColaborador(nome_main)->getNome() << endl;
		cout << "Salario: " << A.getColaborador(nome_main)->getSalario() << endl;
		cout << "Data de admissao:" << A.getColaborador(nome_main)->getAdmissao()[0] << "/" << A.getColaborador(nome_main)->getAdmissao()[1] << "/" << A.getColaborador(nome_main)->getAdmissao()[2] << endl;
	}
	
	return 0;
}