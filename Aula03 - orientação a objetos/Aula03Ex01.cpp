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

void teste1() {
    // Implemente a funcao teste do exercicio 01 segundo o enunciado

    Produto *TV = new Produto; 
    TV -> nome = "TV";
    TV -> preco = 1000;
    TV -> desconto = 0.20;
    TV -> imprimir();

}

/*int main() {
    teste1();
    return 0;
}*/