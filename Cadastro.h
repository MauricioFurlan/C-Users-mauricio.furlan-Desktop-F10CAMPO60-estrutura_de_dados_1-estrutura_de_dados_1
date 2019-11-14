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

class TAD2 {
public:
	//construtor
	TAD2();
	//Overload construtor
	TAD2(std::string);
	// destructor
	~TAD2();
	// acesso a funcao
	std::string getCidade() const;
	void setCidade(std::string);

private:
	std::string novaCidade;
};


class TAD3 {
public:
	//construtor
	TAD3();
	//Overload construtor
	TAD3(std::string);
	// destructor
	~TAD3();
	// acesso a funcao
	std::string getPokemon() const;
	void setPokemon(std::string);

private:
	std::string novoPokemon;
};