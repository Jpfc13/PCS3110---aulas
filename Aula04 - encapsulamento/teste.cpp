#include <iostream>
#include <string>
#include "Pedido.h"
#include "Produto.h"

using namespace std;


/**
 * Implementar as funcoes teste
 **/
void teste1() {
    // IMPLEMENTE seguindo o enunciado

     Produto *escovaDeDente = new Produto;
    escovaDeDente -> setNome("Escova de dentes");
    escovaDeDente -> setPreco(5.49);
    escovaDeDente -> imprimir();
}


void teste2() {
    // IMPLEMENTE seguindo o enunciado

    Produto *agua = new Produto;
    agua -> setNome("Agua");
    agua -> setPreco(4.90);

    Produto *desodorante = new Produto;
    desodorante -> setNome("desodorante");
    desodorante -> setPreco(15.59);

    Pedido *pedido1 = new Pedido;
    pedido1 -> adicionar(agua);
    pedido1 -> adicionar(desodorante);
    pedido1 -> imprimir();
}

