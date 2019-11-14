#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Cadastro.h"

void add_pessoas(std::vector<TAD1>&);

void add_cidade(std::vector<TAD1>&, std::vector<TAD2>&,int);

void printVector(const std::vector<TAD1>&);

void del_pessoa(std::vector<TAD1>&);

void editar_pessoa(std::vector<TAD1>&);

int menu();

int main() {

	std::vector<TAD1> pessoa;
	std::vector<TAD2> cidade;
	int index;
	int op;
	op = menu();
	
	switch (op) {
	case 1:
		
		system("CLS");
		add_pessoas(pessoa);
		system("CLS");
		std::cout << "Jogadores adicionados com louvor!" << "\n";
		printVector(pessoa);
		std::cout << "--------------------------------------" << "\n";
		std::cout << "Digite o index para cadastrar endereco: ";
		std::cin >> index;
		system("CLS");
		add_cidade(pessoa, cidade, index);
	case 2:
		system("CLS");
		printVector(pessoa);
		break;
	}
}
void add_pessoas(std::vector<TAD1>& pessoa) {
	std::string nome;
	std::cout << "quantos participantes deseja adicionar? ";
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
void add_cidade(std::vector<TAD1>& pessoa ,std::vector<TAD2>& cidades, int index) {
	std::string city;
	int qntcity;
	std::cout << "Quantas cidades o participante irá representar?";
	std::cin >> qntcity;
	std::cin.ignore();
	for (int i = 0; i < qntcity; i++) {
		std::cout << "Cidade: ";
		getline(std::cin, city);
		TAD2 novaCity(city);
		cidades.push_back(novaCity);
		pessoa[index].push_back(cidades);
		std::cout << "\n";
	}
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

int menu() {
	unsigned int op;
	std::cout << "-------------" << "\n";
	std::cout << "Liga Pokemon" << "\n";
	std::cout << "-------------" << "\n";
	std::cout << "[1] Adicionar Competidor" << "\n";
	std::cout << "[2] Listar Competidores" << "\n";
	std::cout << "-------------" << "\n";
	std::cout << "Op: ";
	std::cin >> op;
	return op;
}
