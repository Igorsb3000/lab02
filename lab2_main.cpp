#include "lab2.h"

int main(){
	
	string nome;
	int salario;
	//string admissao;
	int admissao[3];

	cout << "Digite o nome do funcionario: " << endl;
	//cin.ignore();
	getline(cin, nome);

	cout << "Digite o salario do funcionario: " << endl;
	cin >> salario;

	cout << "Digite a data de admissao do funcionario: ";
	cin >> admissao[0] >> admissao[1] >> admissao[2];

	for(int i = 0; i<3; i++){
		cout << admissao[i] << endl;
	}


	return 0;
}
