#ifndef PRODUTO_NORMAL_H
#define PRODUTO_NORMAL_H

#include <string>
#include <iostream>
#include "Produto.h"

using namespace std;

// Faça a classe ProdutoNormal ser uma filha concreta de Produto
class ProdutoNormal : public Produto{
public:
    ProdutoNormal(string nome, double preco);
    virtual ~ProdutoNormal();
    void imprimir();
};
#endif