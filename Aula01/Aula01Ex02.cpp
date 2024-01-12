/*Faca os includes necessarios*/

#include <iostream>

using namespace std;

bool produtoEstaDisponivel(string produtos[], int quantidadeDisponivel[], int tamanhoDaLista, string produtoBuscado, int quantidadeBuscada) {
    
    int i, j;

    for(i = 0; i <= tamanhoDaLista; i++){
        if(produtos[i] == produtoBuscado && quantidadeDisponivel[i] >= quantidadeBuscada){
                return true;
        }
    }

    return false;
}

/*Comente a main para enviar
int main() {

    int tamanhoDaLista = 2;
    string produtos[] = {"Arroz", "Feijao" };
    int quantidadeDisponivel[] = {10, 5};

    cout << produtoEstaDisponivel(produtos, quantidadeDisponivel, 2, "Feijao", 6) << endl;

    return 0;
}*/