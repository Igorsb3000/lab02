#include "lab2.h"

int main(){
	funcionario R;
	funcionario vetor[3];
	string nome_main;
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
	

	return 0;
}