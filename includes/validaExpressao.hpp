#pragma once

#include "stack.hpp"
#include <string>



class validaExpressao
{
private:
    stack pilha;
    stack pilha1;
    
public:
    validaExpressao( std::string expressao, char c_a[3]);
    ~validaExpressao();
    bool valida();
};

// BackLog
/* para a validação ser mais assertiva deve se observar a existência de ao menos uma operação completa, com um dois valores e um operador dentro dos parênteses*/