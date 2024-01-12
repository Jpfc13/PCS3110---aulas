#include "Combo.h"
// Faca os includes necessarios

//Implemente os métodos de Combo

Combo::Combo(string nome, int quantidadeMaxima): Produto(nome, 0), quantidadeMaxima(quantidadeMaxima), pn(new ProdutoNormal*[quantidadeMaxima]) {
	
	quantidadeDeProdutosNormais = 0;

}

Combo::~Combo() {
	// implemente
	delete[] pn;

	cout << "Combo " << getNome() << " destruido" << endl;
}

bool Combo::adicionar(ProdutoNormal *ep) {

	if(quantidadeMaxima == quantidadeDeProdutosNormais){
		return false;
	}

	pn[quantidadeDeProdutosNormais++] = ep;
	preco += ep->getPreco();

	return true;
}

ProdutoNormal** Combo::getProdutosNormais() {
	// implemente
	return pn;
}

int Combo::getQuantidadeDeProdutosNormais() {
	// implemente
	return quantidadeDeProdutosNormais;
}

// Veja outros metodos necessarios

void Combo :: imprimir(){
	
	cout << Produto::getNome() << " - " << Produto::getPreco() << " reais - " << getQuantidadeDeProdutosNormais() << " produtos normais" << endl;

	for(int i = 0; i < getQuantidadeDeProdutosNormais(); i++){

		cout << "\t" << 1 + i << ": ";
		 pn[i] -> imprimir();
	}
}