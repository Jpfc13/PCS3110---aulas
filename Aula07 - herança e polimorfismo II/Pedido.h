#ifndef PEDIDO_H
#define PEDIDO_H
#include "Produto.h"
#include "Item.h"
#include "ProdutoComDesconto.h"
//Faca os includes necessarios a medida em que faz os exercicios

class Pedido {
public:
    //Declare os metodos pedidos no enunciado
    Pedido(int quantidadeMaxima);
    virtual ~Pedido();

    bool adicionar(Produto *produto);
    bool adicionar(Produto *produto, int quantidade); 

    Item** getItens();
    int getQuantidadeItens();

    double calcularPrecoTotal();

    void imprimir();

    ProdutoComDesconto** getProdutosComDesconto (int& quantidade);

private:
    Item** itens;
    int quantidadeMaxima;
    int quantidade;
};

#endif // PEDIDO_H
