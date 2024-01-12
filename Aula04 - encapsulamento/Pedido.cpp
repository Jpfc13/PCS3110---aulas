/*
 * Faca os includes e coloque a implementacao dos metodos aqui!
 */

#include "Pedido.h"
#include <iostream>

using namespace std;

bool Pedido::adicionar(Produto* produto){

    for(int i = 0; i < MAXIMO_DE_PRODUTOS; i++){
        if(vetorDeProdutos[i] == produto){
            return false;
        }

    }

    if(produto != nullptr){

        for(int i = 0; i < MAXIMO_DE_PRODUTOS; i++){
            if(vetorDeProdutos[i] == nullptr){
                vetorDeProdutos[i] = produto;
                quantidade += 1;
                return true;
            }
        }

    }
    return false;

}

double Pedido::getPrecoTotal(){

    double somaPrecos = 0;

    for(int i = 0; i < MAXIMO_DE_PRODUTOS; i++){
        if(vetorDeProdutos[i] != nullptr){
            somaPrecos += vetorDeProdutos[i] -> getPreco();
        }
    }

    return somaPrecos;
}

int Pedido::getQuantidade(){
    return quantidade;
}

void Pedido::imprimir(){

    for(int i = 0; i < MAXIMO_DE_PRODUTOS; i++){
        if(vetorDeProdutos[i] != nullptr){
            vetorDeProdutos[i] -> imprimir();
        }
    }

    cout << "Pedido com " << getQuantidade() << " produtos - " << getPrecoTotal() << " reais no total" << endl;

}