#ifndef COMBO_H
#define COMBO_H

// Faca os includes necessarios
#include <string>
#include "Produto.h"

using namespace std;

class Combo : public Produto {
protected:
    //Inclua aqui os atributos necessarios
    Produto **produtos;
    int quantidadeDeProdutos;
    double desconto;
    string nome;
public:
    Combo(string nome, Produto **p, int quantidadeDeProdutos, double desconto);
    virtual ~Combo();
    Produto **getProdutos();
    int getQuantidadeDeProdutos();
    double getDesconto();
    void imprimir();
    double setPreco();
};
#endif