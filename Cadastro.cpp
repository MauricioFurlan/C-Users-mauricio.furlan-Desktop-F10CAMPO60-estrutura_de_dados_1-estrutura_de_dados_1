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
