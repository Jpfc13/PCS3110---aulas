//Faca os includes necessarios
#include <iostream>
#include <string>
#include "Combo.h"
#include "Produto.h"
#include "Pedido.h"

using namespace std;

void teste1() {
    
    Produto *pipoca = new Produto("Pipoca Grande", 20);
    Produto *coca = new Produto("Coca-Cola 1L", 15);

    Produto *produtos[] = {pipoca, coca};

    Combo *combo1 = new Combo("Combo 2", produtos, 2, 0.2);

    combo1 -> imprimir();
    // delete[] produtos;
    delete combo1;
    delete pipoca;
    delete coca;
}

void teste2() {

    Produto *pipoca = new Produto("Pipoca Grande", 20);
    Produto *coca = new Produto("Coca-Cola 1L", 15);

    Produto *produtos[] = {pipoca, coca};

    Combo *combo1 = new Combo("Combo 2", produtos, 2, 0.2);

    Produto *pipocaP = new Produto("Pipoca Pequena", 15);
    Produto *pepsi = new Produto("Pepsi 500ml", 10);

    Pedido *p1 = new Pedido(3);

    p1 -> adicionar(combo1);
    p1 -> adicionar(pipocaP);
    p1 -> adicionar(pepsi);
    p1 -> imprimir();
    p1 -> remover(pipocaP);
    p1 -> imprimir();
    delete p1;
    delete combo1;
    delete pipocaP;
    delete pepsi;
    delete pipoca;
    delete coca;


}

