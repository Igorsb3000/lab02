#include "lab2.h"

//FUNCIONARIO:
void funcionario::setNome(string n){
	this->nome = n;
}

void funcionario::setSalario(double s){
	this->salario = s;
}

void funcionario::setAdmissao(int vetor[]){
	this->admissao = vetor;
}


string funcionario::getNome(){
	return nome;
}
double funcionario::getSalario(){
	return salario;
}

int* funcionario::getAdmissao(){
	return admissao;
}

funcionario::funcionario(){

}
funcionario::funcionario(string n, double s, int *vetor){
	nome = n;
	salario = s;
	admissao = vetor;

}

//EMPRESA:

empresa::empresa(){
	cnpj = 0;
	razao = "-";
}

empresa::empresa(string r, int c){
	razao = r;
	cnpj = c;
}

string empresa::getRazao(){
	return razao;
}

void empresa::setRazao(string r){
	razao = r;
}

int empresa::getCnpj(){
	return cnpj;
}

void empresa::setCnpj(int c){
	this->cnpj = c;
}
	
funcionario* empresa::getColaborador(string nome){
	list<funcionario>::iterator it;
	for(it = colaboradores.begin(); it != colaboradores.end(); it++){
		if ((*it).getNome() == nome){
			return &(*it);
		}
	} 
	cout << "Nao existe cadastro desse funcionario na empresa!!" << endl;
	return nullptr;
}

void empresa::setColaborador(funcionario f){
	this->colaboradores.push_back(f);
}

ostream& operator << (ostream &out, empresa &e){
	out << "Razao: " << e.razao << endl << "CNPJ: " << e.cnpj << endl;
	for (auto it = e.colaboradores.begin(); it != e.colaboradores.end(); it++){
		out << "Funcionario: " << endl << "nome do funcionario: " << 
	(*it).getNome() << endl << "salario: " << (*it).getSalario() << endl << "data de admissao: " << (*it).getAdmissao()[0] << 
	"/" << (*it).getAdmissao()[1] <<  "/" << (*it).getAdmissao()[2]  <<  endl;
	}
	
	return out;
}

istream& operator >> (istream &in, empresa &e){
	char existe = 'n';
	string nome;
	cout << "Digite o nome do funcionario: " << endl;
	in >> nome;
	for(auto it = e.colaboradores.begin(); it != e.colaboradores.end(); it++){
		if((nome.compare((*it).getNome())) == 0){
			cout << "Funcionario já cadastrado!!" << endl;
			existe ='s';
			break;
		}
	}
	if(existe == 'n'){
		funcionario R;
		double salario;
		int *admissao = new int[3];
		R.setNome(nome);
		cout << "Digite o salario: " << endl;
		in >> salario;
		R.setSalario(salario);
		cout << "Digite a data de admissao: " << endl;
		in >> admissao[0] >> admissao[1] >> admissao[2];
		R.setAdmissao(admissao);
		e.setColaborador(R);
		//(*it).colaboradores.setNome(in.nome) >> (*it).colaboradores.setSalario(in.salario) >> (*it).colaboradores.setAdmissao(in.admissao);
	}
	return in;
}

