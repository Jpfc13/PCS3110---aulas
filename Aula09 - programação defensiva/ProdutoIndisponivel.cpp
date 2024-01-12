#include <stdexcept>
#include <string>
#include "ProdutoIndisponivel.h"

#include <iostream>

using namespace std;

ProdutoIndisponivel::ProdutoIndisponivel(string erro): logic_error(erro){

}

 ProdutoIndisponivel::~ProdutoIndisponivel(){

}