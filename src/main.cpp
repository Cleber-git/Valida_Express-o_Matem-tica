#include "../includes/validaExpressao.hpp"

#include <iostream>


using namespace std;

int main(){
    std::string expressao;
    char c_agrupamento[3];

    cout << "Quais caracters de agrupamento você quer verificar? " << endl;
    cin >>  c_agrupamento;

    cout << "Escreva uma expressão matemática e veremos se é uma expressão válida" << endl;
    cin >> expressao;

    validaExpressao val(expressao, c_agrupamento); 
}   
