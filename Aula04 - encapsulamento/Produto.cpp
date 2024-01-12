/*
 * Faca os includes e coloque a implementacao dos metodos aqui!
 */

#include <iostream>
#include <string>
#include "Produto.h"

using namespace std;

string Produto::getNome(){
    return nome;
}

void Produto::setNome(string nome){
    this -> nome = nome;
}

double Produto::getPreco(){
    return preco;
}

void Produto::setPreco(double preco){
    this -> preco = preco;
}

void Produto::imprimir() {
    cout << getNome() << " - " << getPreco() << " reais" << endl;
}
