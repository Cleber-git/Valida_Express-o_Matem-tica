#include "../includes/validaExpressao.hpp"
#include "../includes/stack.hpp"

#include <iostream>
#include <string>

validaExpressao::validaExpressao( std::string expressao, char c_a[3])
{
    std::cout << expressao.size() << std::endl;
    
    for (int i = 0; i < expressao.size(); i++)
    {
        if( expressao[i] == c_a[0] ){

            pilha.insert(expressao[i]);

        }else if(expressao[i] == c_a[1]){
            pilha1.insert(expressao[i]);
        }

    }
    if(valida()){
        std::cout << "Expressão válida. Primeira pilha: " << pilha.size() << "\nSegunda pilha: " << pilha1.size() << std::endl;
    }else{
        std::cout << "Expressão inválida" << std::endl;
    }
    
    

}

validaExpressao::~validaExpressao()
{

}

bool validaExpressao::valida(){
    if(pilha.isEmpty() && pilha1.isEmpty()) return false;

    if(pilha.size() == pilha1.size()) return true;
    return false;
}