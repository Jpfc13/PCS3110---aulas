#include <stdexcept>
#include <string>

#include <iostream>

using namespace std;

class ProdutoIndisponivel : public logic_error {

public:

    ProdutoIndisponivel(string erro);
    virtual ~ProdutoIndisponivel();

};