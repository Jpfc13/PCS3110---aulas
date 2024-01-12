#ifndef PRODUTOCOMDESCONTO_H
#define PRODUTOCOMDESCONTO_H

#include "Produto.h"
#include <string>

using namespace std;

class ProdutoComDesconto : public Produto {
public:
    ProdutoComDesconto(string nome, double preco);
    ProdutoComDesconto(string nome, double preco, double desconto);
    virtual ~ProdutoComDesconto();

    double getDesconto();
    void setDesconto(double desconto);
    //redefina o metodo getPreco
    double getPreco() override;

private:
    double desconto;
};

#endif