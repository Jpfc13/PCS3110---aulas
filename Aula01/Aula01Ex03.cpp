/*Faca os includes necessarios*/

#include <iostream>

using namespace std;

double calcularPrecoTotal(string produtos[], double precos[], int quantidadeDeProdutos, string produtosNaSacola[], int quantidadeDeProdutosNaSacola) {

    double precoFinal;

    precoFinal = 0;

    int i, j;

    for(i = 0; i <= quantidadeDeProdutosNaSacola; i++){ //percorre vetor de produtos na sacola
        for(j = 0; j <= quantidadeDeProdutos; j++){ //percorre vetor de produtos
           if(produtosNaSacola[i] == produtos[j]){
            precoFinal += precos[j];
           }else{
            precoFinal += 0;
           }
        }
    }

    return precoFinal;

}

/*Comente a main para enviar
int main(){

    int quantidadeDeProdutos = 2;
    string produtos[] = {"Arroz", "Feijao" };
    double precos[] = {20.0, 10.0};
    int quantidadeDeProdutosNaSacola = 3;
    string produtosNaSacola[] = {"Arroz", "Batata", "Feijao"};


    cout << calcularPrecoTotal(produtos, precos, quantidadeDeProdutos, produtosNaSacola, quantidadeDeProdutosNaSacola) << endl;

    return 0;
}*/
