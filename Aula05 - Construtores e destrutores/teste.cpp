// Faca os includes necessarios
#include <iostream>
#include <string>
#include "Item.h"
#include "Produto.h"
#include "Pedido.h"

using namespace std;

void teste1() {
    // IMPLEMENTE seguindo o enunciado
    Produto *cueca = new Produto("Cueca", 20.89);
    cueca -> imprimir();
    Item *cuecas = new Item(cueca, 5);
    cuecas -> imprimir();
    delete cuecas;
    delete cueca;
}

void teste2() {
    // IMPLEMENTE seguindo o enunciado

    Produto *absorvente = new Produto("Absorvente", 10.40);
    Produto *pringles = new Produto("Pringles", 12.37);
    Produto *cookies = new Produto("Cookies", 5.39);

    Pedido *pedido1 = new Pedido(4);
    pedido1 -> adicionar(absorvente, 1);
    pedido1 -> adicionar(pringles, 1);
    pedido1 -> adicionar(cookies, 1);

    Pedido *pedido2 = new Pedido(4);
    pedido2 -> adicionar(absorvente, 1);
    pedido2 -> adicionar(cookies, 2);

    pedido1 -> ~Pedido();

    pedido2 -> ~Pedido();
}

