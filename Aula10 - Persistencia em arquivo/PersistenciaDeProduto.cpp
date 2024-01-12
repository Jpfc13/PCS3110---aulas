#include "PersistenciaDeProduto.h" 
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "Pedido.h"

using namespace std;

PersistenciaDeProduto::PersistenciaDeProduto(string arquivo): arquivo(arquivo) {
    
}

PersistenciaDeProduto::~PersistenciaDeProduto(){

}

void PersistenciaDeProduto::inserir(Produto *produto){

    ofstream output;
    output.open(arquivo, ios_base::app);

    if(output){
        output << produto -> getNome() << endl;
        output << produto -> getPreco() << endl;
    }

    output.close();

}

Pedido *PersistenciaDeProduto::obter(){

    Pedido *p1 = new Pedido(10);

    ifstream input;
    input.open(arquivo);

    if(input.fail()){
        throw new invalid_argument("Erro de leitura");
        input.close();
    }

    string nome = "a";

    input >> nome;

    if(nome == "a"){
        return NULL;
    }

    double preco;
    input >> preco;
    while(input){
        Produto *produto = new Produto(nome, preco);
        p1 -> adicionar(produto);
        input >> nome;
        input >> preco;
    }

    if (!input.eof()){
        throw new logic_error("Arquivo com formatacao inesperada");
    }

    return p1;
}
