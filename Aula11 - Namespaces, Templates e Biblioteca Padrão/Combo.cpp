#include "Combo.h"
#include <stdexcept>
#include <iostream>
#include <algorithm>

using namespace std;

Combo::Combo(string nome) : Produto(nome, 0){

    produtos = new vector <Produto*>();

}

Combo::~Combo() {
    delete produtos;
}

void Combo::adicionar(Produto *p) {

    vector <Produto*>::iterator valor =
        find(produtos -> begin(), produtos -> end(), p);

    if(valor != produtos -> end()){
        throw new invalid_argument("Produto ja existe");
    }

    produtos -> push_back(p);
}

double Combo::getPreco() {
    double soma = 0;
    
    for (unsigned int i = 0; i < produtos -> size(); i++){
        soma += produtos -> at(i) ->getPreco();
    }

    return soma;
}

vector <Produto*>* Combo::getProdutos() {
    return produtos;
}

int Combo::getQuantidade() {
    return produtos -> size();
}

void Combo::imprimir() {
    cout << nome << " - " << getPreco() << " reais cada" << endl;

    for (unsigned int i = 0; i < produtos -> size(); i++)
        produtos -> at(i) ->imprimir();
}