#ifndef __STACK_H__
#define __STACK_H__
#include <iostream>
#include "linkedlist.h"

using namespace std;
template <typename R>
class Stack
{
    private:
     linkedlist<R> lista;
    public:
      Stack() {}
      void push (R n)  {lista.insertarcabeza(n);  }
      R pop() {return lista.pop();}
      
;}

#endif