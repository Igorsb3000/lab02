#include "lab2.h"


void funcionario::setNome(string n){
	nome = n;
}

void funcionario::setSalario(double s){
	salario = s;
}

void funcionario::setAdmissao(int vetor[]){
	admissao = vetor;
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
	cnpj = c;
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
	colaboradores.push_back(f);
}

