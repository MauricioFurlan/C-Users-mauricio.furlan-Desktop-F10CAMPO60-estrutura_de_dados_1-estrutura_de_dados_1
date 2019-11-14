#include <string>
#include "Cadastro.h"

TAD1::TAD1() {
	//novoNome = "";
}
TAD1::TAD1(std::string nome) {
	novoNome = nome;
}
TAD1::~TAD1() {

}
std::string TAD1::getName() const {
	return novoNome;
}
void TAD1::setName(std::string nome) {
	novoNome = nome;
}

TAD2::TAD2()  {
	//novoNome = "";
}
TAD2::TAD2(std::string cidade) {
	novaCidade = cidade;
}
TAD2::~TAD2() {

}
std::string TAD2::getCidade() const {
	return novaCidade;
}

void TAD2::setCidade(std::string cidade){
	novaCidade = cidade;
}

TAD3::TAD3() {
	//novoNome = "";
}
TAD3::TAD3(std::string pokemon) {
	novoPokemon = pokemon;
}
TAD3::~TAD3() {

}
std::string TAD3::getPokemon() const {
	return novoPokemon;
}

void TAD3::setPokemon(std::string pokemon){
	novoPokemon = pokemon;
}
