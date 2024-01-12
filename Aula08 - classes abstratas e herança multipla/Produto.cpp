#include <iostream>
#include "Produto.h"

using namespace std;

int Produto::proximoId = 0;

Produto::Produto(string nome, double preco) : nome(nome), preco(preco){
    id = getProximoId();
    proximoId++;
}

Produto::~Produto() {
}

double Produto::getPreco() {
    return preco;
}
string Produto::getNome() {
    return nome;
}

int Produto :: getId(){
    return id;
}

int Produto :: getProximoId(){
    return proximoId;
}

// void Produto::imprimir() { // Torne abstrato
//     cout << getNome() << " - " << getPreco() << " reais" << endl;
// }