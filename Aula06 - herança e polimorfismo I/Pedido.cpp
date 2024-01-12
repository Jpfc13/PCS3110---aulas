//Faca os includes necessarios
//Implemente aqui os metodos
#include "Pedido.h"

Pedido::Pedido(int quantidadeMaxima): quantidadeMaxima(quantidadeMaxima){

    quantidadeDeProdutos = 0;
    valor = 0;
    produtos = new Produto*[quantidadeMaxima] {nullptr};

}

Pedido::~Pedido() {

    /*for(int i = 0; i < quantidadeMaxima; i++){
        delete produtos[i];
    }*/
    delete[] produtos;

}

bool Pedido::adicionar(Produto *p) {
    
    for(int i = 0; i < quantidadeMaxima; i++){
        if(p == produtos[i]){
            return false;
        }
        
        if(produtos[i] == nullptr){
            produtos[i] = p;
            valor += p -> getPreco();
            quantidadeDeProdutos += 1;
            return true;
        }
    }
    return false;
}


bool Pedido::remover(Produto *p) {
    
    int indice;

    for(int i = 0; i < quantidadeMaxima; i++){
        if(p == produtos[i]){
            produtos[i] = nullptr;
            indice = i;
            for(int j = indice; j < quantidadeMaxima - 1; j++){
                produtos[j] = produtos[j + 1];
            }
        valor -= p -> getPreco();
        quantidadeDeProdutos -= 1;
        return true;  
        }
    }
    return false;
}


Produto** Pedido::getProdutos() {
    return produtos;
}

int Pedido::getQuantidadeDeProdutos() {
    return quantidadeDeProdutos;
}

double Pedido::getValor() {
    return valor;
}

void Pedido::imprimir() {
    cout << "Pedido com " << getQuantidadeDeProdutos() << " produto(s) - " << getValor() << " reais" << endl;
    for (int i = 0; i < getQuantidadeDeProdutos(); i++)
        getProdutos()[i]->imprimir();
    cout << endl;
}