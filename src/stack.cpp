#include "../includes/stack.hpp"

stack::stack(): pos(0)
{
}

stack::~stack()
{
}


void stack::insert( tipoItem item){

    // std::cout << "chamada de inserção" << std::endl;
    estrutura[pos] = item; 
    pos++;  
    // std::cout << "Inserção concluída" << std::endl;
}

void stack::print(){

    std::cout << std::endl;     
    if( !isEmpty() ){
        for (int i = 0; i < sizeof(estrutura); i++)
        {
            std::cout << estrutura[i];
        }
        std::cout << std::endl;
        std::cout << std::endl;
    }
    return;


}

int stack::size(){
    return pos;

}

// bool stack::validaTipo(tipoItem item){


// }