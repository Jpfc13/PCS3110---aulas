/*Faca os includes necessarios*/

#include <iostream>

using namespace std;

double calculaTaxaDeEntrega(int tipoDePagamento, bool temCupom, int distancia) {

    double delivery;

/*Calcula valor da entrega*/
    if(distancia < 1){
        delivery = 0;
    }else if (distancia > 1){
        delivery = distancia * 1.5;
    }

/*Cupom*/
    if(tipoDePagamento == 3 && temCupom == 1 && distancia <= 5){
        delivery = 0;
    }

/*Desconto da entrega por PIX*/
    if(tipoDePagamento == 1 && distancia > 5){
        delivery = delivery * 0.95;
    }

    return delivery;
}

/*Comente a main para enviar
int main(){

    cout << calculaTaxaDeEntrega(3, true, 4) << endl;

    return 0;
}*/
