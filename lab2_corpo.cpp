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

