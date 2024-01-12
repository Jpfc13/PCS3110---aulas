/*
 * Coloque a definicao da classe aqui. Use as diretivas adequadas e
 * inclua os arquivos e/ou bibliotecas necessarios para a classe.
 *
 *  Os atributos devem ser acessiveis somente internamente ao escopo
 *  da classe
 */
#ifndef PRODUTO_H
#define PRODUTO_H
#include <iostream>
#include <string>
#define MAXIMO_DE_PRODUTOS 10

using namespace std;


class Produto {
    private:
        string nome;
        double preco;

    public:
        string getNome();
        void setNome(string nome);
        double getPreco();
        void setPreco(double preco);
        void imprimir();
};
#endif