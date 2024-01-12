#include "ProdutoComDesconto.h"
#include <iostream>

using namespace std;

ProdutoComDesconto::ProdutoComDesconto(string nome, double preco) : Produto(nome, preco),
                                                                 desconto(0) {}

ProdutoComDesconto::ProdutoComDesconto(string nome, double preco, double desconto) : Produto(nome, preco), 
                                                                               desconto(desconto) {}

ProdutoComDesconto::~ProdutoComDesconto() {}

double ProdutoComDesconto::getDesconto() {
    return desconto;
}

void ProdutoComDesconto::setDesconto(double desconto) {
    this->desconto = desconto;
}

//Implemente o metodo getPreco redefinido

double ProdutoComDesconto::getPreco(){

    double preco = Produto::getPreco(); 
    
    return (preco * (1.0 - getDesconto()));

}