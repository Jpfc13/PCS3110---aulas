#include <iostream>

/*#include Produto*/

using namespace std;

class Produto {
public:
    string nome = "";
    double preco = 0.0;
    double desconto = 0.0;
    double calcularValorDeVenda();
    void imprimir();
};

// Implementar os metodos da classe Produto

double Produto::calcularValorDeVenda() {
    
    double precoComDesconto = 0;
    
    precoComDesconto = preco * (1 - desconto);

    return precoComDesconto;
}

void Produto::imprimir(){

    cout << "Produto: " << nome << " custa " << calcularValorDeVenda() << endl;

}

class Pedido {
public:
    Produto *produto1 = nullptr;
    Produto *produto2 = nullptr;
    int quantidade1 = 0;
    int quantidade2 = 0;

    bool adicionar(Produto *produto, int quantidade);
    double calcularPrecoTotal();
    void imprimir();
};

// Implementar os metodos da classe Pedido

bool Pedido::adicionar(Produto *produto, int quantidade){

    if(produto == nullptr){
        return false;
    }

    if(produto1 != nullptr && produto2 != nullptr){
        return false;
    }

    if(produto1 == nullptr){
        produto1 = produto;
        quantidade1 = quantidade;
        return true;
    }
    
    else if(produto2 == nullptr && produto != produto1){
        produto2 = produto;
        quantidade2 = quantidade;
        return true;
    }

    return false;

}

double Pedido::calcularPrecoTotal(){

    double precoTotal = 0;

    if(produto1 != nullptr && quantidade1 > 0){
        precoTotal += ((produto1 -> calcularValorDeVenda()) * quantidade1);
    }

    if(produto2 != nullptr && quantidade2 > 0){
        precoTotal += ((produto2 -> calcularValorDeVenda()) * quantidade2);
    }

    return precoTotal;

}

void Pedido::imprimir(){
    
    if(produto1 != nullptr){
        produto1 -> imprimir();
    }

    if(produto2 != nullptr){
        produto2 -> imprimir();
    }

    cout << "Pedido: Preco Total: " << calcularPrecoTotal() << endl;
}

void teste1() {
    // Implemente a funcao teste do exercicio 01 segundo o enunciado

    Produto *TV = new Produto; 
    TV -> nome = "TV";
    TV -> preco = 1000;
    TV -> desconto = 0.20;
    TV -> imprimir();

}

void teste2() {
    // Implemente a funcao teste do exercicio 02 segundo o enunciado


    /*TV*/
    Produto *TV = new Produto; 
    TV -> nome = "TV";
    TV -> preco = 1000;
    TV -> desconto = 0.20;


    /*Suporte para TV*/
    Produto *suporteParaTV = new Produto; 
    suporteParaTV -> nome = "Suporte para TV";
    suporteParaTV -> preco = 150;
    suporteParaTV -> desconto = 0.05;


    /*Pedido*/
    Pedido *pedido1 = new Pedido;
    pedido1 -> adicionar(TV, 1);
    pedido1 -> adicionar(suporteParaTV, 2);
    pedido1 -> imprimir();

}

/*int main() {
    teste1();
    return 0;
}*/