#ifndef PEDIDO_H
#define PEDIDO_H
#include "Produto.h"

class Pedido {
private:
    //Inclua aqui os atributos necessarios
    int quantidadeMaxima;
    Produto **produtos;
    double valor;
    int quantidadeDeProdutos;

public:
    Pedido(int quantidadeMaxima);
    virtual ~Pedido();

    bool adicionar(Produto *p);
    bool remover(Produto *p);
    Produto **getProdutos();
    int getQuantidadeDeProdutos();
    double getValor();
    void imprimir();
};
#endif