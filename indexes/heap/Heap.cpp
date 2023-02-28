//
// Created by dchul on 2/02/2023.
//


#include <iostream>
#include "heap.h"
#include <cstring>
using namespace std;

struct Trans{
    string name;
    string apellido;
    int amount;



};

int main()
{
    Trans* t = new Trans;

    Trans* t2 = new Trans;

    Heap<int,Trans*>* heap = new Heap<int, Trans*>();

    Trans* transpointer;

    //heap->top();
    heap->push(8,t);
    heap->push(9,t2);
    heap->push(10,t);
    heap->push(11,t2);

    heap->pop();
    transpointer = heap->top(); //18f0
    std::cout<<transpointer<<std::endl;

    heap->pop();
    transpointer = heap->top(); //1960
    std::cout<<transpointer<<std::endl;


    /*
    heap->push(55);
    cout<<heap->top()<<endl;//55
    heap->pop();
    heap->pop();
    cout<<heap->top()<<endl;//49
    */

}

