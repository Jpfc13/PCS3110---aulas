#include "ProdutoNormal.h"
// Faca os includes necessarios
//implemente os métodos

ProdutoNormal :: ProdutoNormal(string nome, double preco) : Produto(nome, preco){
   
}

ProdutoNormal :: ~ProdutoNormal(){
    cout << "ProdutoNormal " << Produto::getNome() << " Destruido" << endl;
}

void ProdutoNormal :: imprimir(){
    cout << getNome() << " - " << getPreco() << " reais" << endl;
}