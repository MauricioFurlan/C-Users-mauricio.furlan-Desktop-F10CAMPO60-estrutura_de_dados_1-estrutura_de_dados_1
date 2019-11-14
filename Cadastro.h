#pragma once
#include <iostream>
#include <string>


class TAD1 {
public:
	//construtor
	TAD1();
	//Overload construtor
	TAD1(std::string);
	// destructor
	~TAD1();
	// acesso a funcao
	std::string getName() const;
	void setName(std::string); 


private:
	std::string novoNome;
};