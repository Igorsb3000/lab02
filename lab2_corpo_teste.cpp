#include "lab2_teste.h"

//Métodos da classe funcionario:
void funcionario::setSalario(double s){
	this->salario = s;
}

string funcionario::getNome(){
	return nome;
}

int funcionario::getCpf(){
	return cpf;
}
double funcionario::getSalario(){
	return salario;
}

int *funcionario::getAdmissao(){
	return admissao;
}

funcionario::funcionario(){
	cpf = 00000000000;
	nome = "Desconhecido";
	salario = 000.00;
	admissao[0] = 00;
	admissao[1] = 00;
	admissao[2] = 0000;

	contador_func++;
}

funcionario::funcionario(int c, string n, double s, int *data){
	cpf = c;
	nome = n;
	salario = s;
	for(int i=0; i < 3; i++){
		admissao[i] = data[i];
	}
	contador_func++;
}

int funcionario::getContador_func(){
	return contador_func;
}


//Métodos da classe empresa:
empresa::empresa(){
	cnpj = 0;
	razao = "-";
	contador_empre++;
}

empresa::empresa(string r, int c){
	razao = r;
	cnpj = c;
	contador_empre++;
}

string empresa::getRazao(){
	return razao;
}

int empresa::getCnpj(){
	return cnpj;
}

list<funcionario> & empresa::getListColab(){
	return colaboradores;
}

void empresa::setColaborador(funcionario f){
	this->colaboradores.push_back(f);
}

//e)
ostream& operator << (ostream &out, empresa &e){
	cout << endl;
	cout << "***Empresa " << e.razao << "***" << endl;
	out << "Razão: " << e.razao << endl << "CNPJ: " << e.cnpj << endl << endl;

	out << "***Lista de Funcionários***" << endl;
	for (auto it = e.colaboradores.begin(); it != e.colaboradores.end(); it++){
		 out << "Nome: " << (*it).getNome() << endl << "CPF: " << (*it).getCpf() << endl << "Salário: R$ " << (*it).getSalario() << endl << "Admissão: " << (*it).getAdmissao()[0] << 
	"/" << (*it).getAdmissao()[1] <<  "/" << (*it).getAdmissao()[2]  <<  endl << endl;;
	}
	
	return out;
}

int empresa::getContador_empre(){
	return contador_empre;
}
