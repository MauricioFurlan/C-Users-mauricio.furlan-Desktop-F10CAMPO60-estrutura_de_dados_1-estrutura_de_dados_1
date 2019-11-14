#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Cadastro.h"

void add_pessoas(std::vector<TAD1>&);

void printVector(const std::vector<TAD1>&);

void del_pessoa(std::vector<TAD1>&);

void editar_pessoa(std::vector<TAD1>&);

int main() {

	std::vector<TAD1> pessoa;

	add_pessoas(pessoa);
	printVector(pessoa);
	del_pessoa(pessoa);
	printVector(pessoa);
	editar_pessoa(pessoa);
	printVector(pessoa);

	return 0;
}

void add_pessoas(std::vector<TAD1>& pessoa) {
	std::string nome;

	std::cout << "quantos nomes deseja adicionar? ";
	int tamanhoNome;
	std::cin >> tamanhoNome;
	std::cin.ignore();
	for (int i = 0; i < tamanhoNome; i++) {
		std::cout << "nome: ";
		
		getline(std::cin, nome);

		TAD1 novoNome(nome);
		pessoa.push_back(novoNome);
		std::cout << "\n";
	}
	std::cout << "\n";
}
void printVector(const std::vector<TAD1>& pessoa) {
	size_t size = pessoa.size();
	for (size_t i = 0; i < size; i++) {
		std::cout << "Nome:" << "[" <<i<< "]" << pessoa[i].getName() << "\n";
	}
}

void del_pessoa(std::vector<TAD1>& pessoa) {
	unsigned int op;
	std::cout << "Digite o index do registro a ser deletado: ";
	std::cin >> op;
	pessoa.erase(pessoa.begin()+op);
}

void editar_pessoa(std::vector<TAD1>& pessoa) {
	unsigned int op;
	std::string novoEdit;
	std::cout << "Digite o index do registro para editar ";
	std::cin >> op;
	std::cout << "Digite o novo nome: ";
	std::cin >> novoEdit;
	pessoa.at(op) = novoEdit;
}