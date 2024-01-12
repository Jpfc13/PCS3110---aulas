#ifndef PEDIDO_H
#define PEDIDO_H
#include "Produto.h"
#include "Item.h"

class Pedido {
public:
    Pedido(int quantidadeMaxima);
    ~Pedido();
    
    bool adicionar(Produto *produto, int quantidade); 

    Item** getItens();
    int getQuantidadeItens();

    double calcularPrecoTotal();

    // Implemente o método
    void imprimir(); 

private:
    Item** itens;
    int quantidadeMaxima;
    int quantidade;
};

#endif // PEDIDO_H
