#pragma once

#include <iostream>
#include <string>

typedef char tipoItem;


class stack
{
private:
   int pos;
   tipoItem *estrutura = new tipoItem;

public:
    stack(/* args */);
    ~stack();

    void pop();
    void insert( tipoItem item);
    bool isEmpty(){return pos <= 0;}
    void print();
    int size();

};


