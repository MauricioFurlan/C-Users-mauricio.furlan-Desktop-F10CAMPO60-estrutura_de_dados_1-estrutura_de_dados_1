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

class TAD3 :public TAD {
public:
	std::string valor;
	void escrever() override {

		std::cout << valor;

	}

	void ler() override {
		std::string registro;
			std::cout << "Valor do registro: ";
			std::cin >> registro;
			if (registro.length() > 10) {
				std::cout << "Valor muito grande";
				return;
			}
			else {
				valor = registro;
			}
		//	colunas.push_back(colunas_add);
		
	}
};

class TAD2 {

};

int main() {
	TAD3 tad3;
	tad3.ler();
	tad3.escrever();


	return 0;
}