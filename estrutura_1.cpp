#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <vector> 
#include <fstream>
#define _CRT_SECURE_NO_DEPRECATE
#include "test_include.h"

class TAD {
public:
	virtual void escrever() = 0;
	virtual void ler() = 0;
	
};

class TAD1 : public TAD {
public:
	std::string pessoa;
	void escrever() override {
		std::cout << pessoa;
	}
	void ler() override {
		std::string nome;
		std::cout << "Digite o nome completo: ";
		std::cin >> nome;
		if (nome.length() > 50) {
			std::cout << "Nome muito grande para salvar, por favor abrevie";
			return;
		}
		else {
			pessoa = nome;
		}
	}
};
	class TAD2 : public TAD {
	public:
		std::string endereco;

		void escrever() override {
			std::cout << endereco;
		}

		void ler() override {
			std::string end;
			std::cout << "Digite o endereco:";
			std::cin >> end;
			if (end.length() > 30) {
				std::cout << "Endereco muito grande, por favor abrevie";
				return;
			}
			else {
				endereco = end;
			}
		}
};

	class TAD3 :public TAD {
	public:
		std::string veiculo;
		void escrever() override {
			std::cout << veiculo;
		}

		void ler() override {
			std::string carro;
			std::cout << "digite o nome do veiculo: ";
			std::cin >> carro;
			if (carro.length() > 10) {
				std::cout << "Valor muito grande para ser salvo";
				return;
			}
			else {
				veiculo = carro;
			}
			//	colunas.push_back(colunas_add);
		}
	};


int main() {
	
	TAD1 nome;
	nome.ler();
	nome.escrever();

	TAD2 endereco;
	endereco.ler();
	endereco.escrever();

	TAD3 veiculo;
	veiculo.ler();
	veiculo.escrever();

	return 0;
}