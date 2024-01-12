//Faca os includes necessarios
#include <string>
#include <iostream>
#include "Combo.h"

using namespace std;

//Implemente aqui os metodos

Combo::Combo(string nome, Produto **p, int quantidadeDeProdutos, double desconto):
Produto(nome, 0.0), produtos(p), quantidadeDeProdutos(quantidadeDeProdutos), desconto(desconto){
    
    for(int i = 0; i < quantidadeDeProdutos; i++){
        preco += produtos[i] -> getPreco();
    }

    preco *= (1 - desconto);
}

Produto** Combo::getProdutos() {
    return produtos;
}

int Combo::getQuantidadeDeProdutos(){
    return quantidadeDeProdutos;
}

double Combo::getDesconto(){
    return desconto;
}

void Combo::imprimir(){

double preco = 0;

    for(int i = 0; i < quantidadeDeProdutos; i++){
        preco += produtos[i] -> getPreco();
    }

    cout << "Produto: " << getNome() << " - " << preco * (1 - getDesconto()) << " reais" << endl;
}

Combo::~Combo(){
    /*for(int i = 0; i < quantidadeDeProdutos; i++){
        delete produtos[i];
    }*/

    /*delete[] produtos;*/
}