#include "Pedido.h"

#include <iostream>

//Faca os includes necessarios e implemente os metodos pedidos no enunciado

using namespace std;

Pedido::Pedido(int quantidadeMaxima) : itens(new Item*[quantidadeMaxima]), quantidadeMaxima(quantidadeMaxima), quantidade(0) {}

Pedido::~Pedido() {
    cout << "Pedido com " << quantidade << " item(ns) destruido" << endl;
    for (int i = 0; i < quantidade; ++i) delete itens[i];
    delete[] itens;
}

Item** Pedido::getItens() {
    return itens;
}

int Pedido::getQuantidadeItens() {
    return quantidade;
}

bool Pedido::adicionar(Produto* produto, int quantidade) {
    if (this->quantidade >= quantidadeMaxima)
        return false;

    itens[this->quantidade++] = new Item(produto, quantidade);
    return true;
}

bool Pedido::adicionar(Produto* produto){
    if (this->quantidade >= quantidadeMaxima)
        return false;
    
    itens[this->quantidade++] = new Item(produto, 1);
    return true;
}

double Pedido::calcularPrecoTotal() {
    double precoTotal = 0;
    for (int i = 0; i < quantidade; i++)
        precoTotal += itens[i]->calculaPrecoTotal();

    return precoTotal;
}

void Pedido::imprimir(){
    
    cout << "Pedido com " << getQuantidadeItens() << " item(ns)" << endl;

    for(int i = 0; i < getQuantidadeItens(); i++){
        cout << getItens()[i] -> getQuantidade() << " unidade(s) de " << getItens()[i] -> getProduto() -> getNome() << " - " << getItens()[i] -> getProduto() -> getPreco() << " reais cada" << endl;
    }

}

ProdutoComDesconto** Pedido :: getProdutosComDesconto(int& quantidade){

    quantidade = 0;

     ProdutoComDesconto** vetor = nullptr;

    if(getQuantidadeItens() == 0){
        return NULL;
    }

    vetor = new ProdutoComDesconto*[getQuantidadeItens()];

    for(int i = 0; i < getQuantidadeItens(); i++){
        
        ProdutoComDesconto *j = dynamic_cast <ProdutoComDesconto*>(getItens()[i] -> getProduto());

        if(j != NULL){
            vetor[quantidade] = j;
            quantidade++;
        }
    }

    if(quantidade == 0){
        delete[] vetor;
        return NULL;
    }

    return vetor;

}