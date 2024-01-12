#ifndef COMBO_H
#define COMBO_H

// Faca os includes necessarios
#include "ProdutoNormal.h"

class Combo : public Produto{

private:

    int quantidadeMaxima;
    ProdutoNormal** pn;
    int quantidadeDeProdutosNormais;

public:
    Combo(string nome, int quantidadeMaxima);
    virtual ~Combo();

    bool adicionar(ProdutoNormal *ep);
    ProdutoNormal **getProdutosNormais();
    int getQuantidadeDeProdutosNormais();

    void imprimir();
};
#endif