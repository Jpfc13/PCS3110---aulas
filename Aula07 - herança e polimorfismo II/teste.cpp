//Faca os includes necessarios
#include <iostream>
#include <string>
#include "Pedido.h"
#include "Produto.h"
#include "Item.h"
#include "ProdutoComDesconto.h"

using namespace std;

void teste1(){
    
    Pedido *p1 = new Pedido(2);
    Produto *bala = new Produto("Bala de goma", 3.50);
    
    p1 -> adicionar(bala);

    Produto *choco = new Produto("Chocolate", 5.20);

    p1 -> adicionar(choco, 4);

    p1 -> imprimir();

    delete p1;
    delete choco;
    delete bala;
}

void teste2(){
    
    //Implemente o teste2
    Pedido *p2 = new Pedido(2);
    Produto *linguica = new Produto("Linguica", 20.90);

    p2 -> adicionar(linguica, 2);

    ProdutoComDesconto *picanha = new ProdutoComDesconto("Picanha", 70.49, 0.1);

    p2 -> adicionar(picanha);

    p2 -> imprimir();

    delete p2;
    delete picanha;
    delete linguica;

}

void teste3() {
    //Implemente o teste3

    Pedido *p3 = new Pedido(2);

    int quantidadeComDesconto = 0;

    p3 -> getProdutosComDesconto(quantidadeComDesconto);

    cout << quantidadeComDesconto << endl;

    Produto *refri = new Produto("Refrigerante", 7.80);

    p3 -> adicionar(refri, 2);

    quantidadeComDesconto = 0;

    p3 -> getProdutosComDesconto(quantidadeComDesconto);

    cout << quantidadeComDesconto << endl;

    ProdutoComDesconto *pizza = new ProdutoComDesconto("Pizza", 40.99);

    p3 -> adicionar(pizza, 2);

    quantidadeComDesconto = 0;

    p3 -> getProdutosComDesconto(quantidadeComDesconto);

    cout << quantidadeComDesconto << endl;

    delete p3;
    delete pizza;
    delete refri;

}

