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

