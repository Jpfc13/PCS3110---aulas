// Faca os includes necessarios
#include <string>
#include <iostream>
#include "ProdutoNormal.h"
#include "Combo.h"

using namespace std;

void teste1() {
    
    ProdutoNormal *temaki = new ProdutoNormal("Temaki Atum", 20);
    ProdutoNormal *shimeji = new ProdutoNormal("Shimeji", 15);
    ProdutoNormal *sashimi = new ProdutoNormal("Sashimi", 15);
    Combo *c1 = new Combo("Sushi Executivo", 3);

    c1 -> adicionar(temaki);
    c1 -> adicionar(shimeji);
    c1 -> adicionar(sashimi);

    c1 -> imprimir();

    delete temaki;
    delete shimeji;
    delete sashimi;
    delete c1;

}

void teste2() {
    
    ProdutoNormal *temaki = new ProdutoNormal("Temaki Atum", 20);
    ProdutoNormal *shimeji = new ProdutoNormal("Shimeji", 15);
    ProdutoNormal *sashimi = new ProdutoNormal("Sashimi", 15);
    Combo *c1 = new Combo("Sushi Executivo", 3);

    c1 -> adicionar(temaki);
    c1 -> adicionar(shimeji);
    c1 -> adicionar(sashimi);

    cout << temaki -> getId() << endl;
    cout << shimeji -> getId() << endl;
    cout << sashimi -> getId() << endl;
    cout << c1 -> getId() << endl;

    
    delete temaki;
    delete shimeji;
    delete sashimi;
    delete c1;
}