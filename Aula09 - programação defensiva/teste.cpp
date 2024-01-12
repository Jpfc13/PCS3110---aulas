//Faca os includes necessarios
#include <stdexcept>
#include <string>
#include "Produto.h"
#include "ProdutoIndisponivel.h"
#include "Item.h"
#include "Pedido.h"

#include <iostream>

using namespace std;

void teste1(){
    /*Implemente conforme o enunciado*/
    try{
        Produto *p1 = new Produto("p1", -1);
        delete p1;
    }catch(invalid_argument *e){
        cout << e -> what() << endl;
        delete e;
    }
    
}

void teste2(){
    /*Implemente conforme o enunciado*/
    try{
        Produto *gatorade = new Produto("Gatorade", 7.5);
        cout << gatorade -> getPreco() << endl;
        gatorade -> setDisponivel(false);
        gatorade -> getPreco();
        delete gatorade;

    }catch(ProdutoIndisponivel *e){
        cout << e -> what() << endl;
        delete e;
    }
}

void teste3(){
   /*Implemente conforme o enunciado*/    
   Pedido *p1 = new Pedido(4);
   Produto *cerveja = new Produto("Cerveja", 4.35);
   Produto *bis = new Produto("Bis", 3.90);
   Produto *frigideira = new Produto("Frigideira", 80.79);
   Produto *vassoura = new Produto("Vassoura", 30.50);
   p1 -> adicionar(cerveja, 5);
   p1 -> adicionar(bis, 2);
   p1 -> adicionar(frigideira, 1);
   p1 -> adicionar(vassoura, 1);
   cout << p1 -> calcularPrecoTotal() << endl;
   cerveja -> setDisponivel(false);
   frigideira -> setDisponivel(false);
   cout << p1 -> calcularPrecoTotal() << endl;
   bis -> setDisponivel(false);
   vassoura -> setDisponivel(false);
   cout << p1 -> calcularPrecoTotal() << endl;
   delete p1;
   delete cerveja;
   delete bis;
   delete frigideira;
   delete vassoura;
}
