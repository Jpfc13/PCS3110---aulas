#include <iostream>
#include "Produto.h"
#include "Pedido.h"
#include "PersistenciaDeProduto.h"
using namespace std;

void teste1() {
    /* Implemente o teste1 */
    Produto *lasanha = new Produto("Lasanha", 20);
    Produto *batata = new Produto("Batata", 5);
    PersistenciaDeProduto *p1 = new PersistenciaDeProduto("teste1.txt");

    p1 -> inserir(lasanha);
    p1 ->inserir (batata);

    delete lasanha;
    delete batata;
    delete p1;
}

void teste2() {
    /* Implemente o teste2 */
    try{
        PersistenciaDeProduto *p1 = new PersistenciaDeProduto("teste2.txt");
        Pedido *pedido = p1 -> obter();
        if(pedido !=  NULL){
            pedido -> imprimir();
        }
        delete pedido;
        delete p1;
    } catch(invalid_argument *e){
        cout << e -> what() << endl;
        delete e;
    } catch(logic_error *e){
        cout << e ->what() << endl;
        delete e;
    }
}