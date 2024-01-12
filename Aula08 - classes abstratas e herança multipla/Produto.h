#ifndef PROD_H
#define PROD_H

#include <string>
using namespace std;

class Produto {
protected:
    string nome;
    double preco;
    static int proximoId;
    int id;

public:
    Produto(string nome, double preco);
    virtual ~Produto();
    
    double getPreco();
    string getNome();
    int getId();
    static int getProximoId();
    
    virtual void imprimir() = 0;// Torne a classe abstrata
};
#endif