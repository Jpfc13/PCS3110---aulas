/*
 * Use as diretivas adequadas e
 * inclua os arquivos e/ou bibliotecas necessarios para a classe.
 */

#ifndef PEDIDO_H
#define PEDIDO_H
#define MAXIMO_DE_PRODUTOS 10
#include "Produto.h"

class Pedido {
    /*
     * Os atributos devem ser acessiveis somente internamente ao escopo
     * da classe
     */
    private:
        Produto* vetorDeProdutos[MAXIMO_DE_PRODUTOS] = {nullptr};
        double precoTotal;
        int quantidade = 0;

    /*
     * Os metodos devem ser acessíveis de fora do escopo da classe
     */
    public:
        bool adicionar(Produto* produto);

        double getPrecoTotal();

        int getQuantidade();

        void imprimir();
};
#endif