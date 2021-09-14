#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <iostream>
#include "linkedlist.h"

using namespace std;

template <typename R>
class Queue 
{
  private:
    LinkedList<R> lista;
  public:
    Queue();
    void insert( R n);
    R pop();
    ostream &print(ostream &os);
    tam_r size() {return lista.size();}
};

template <typename R>
void Queue<R>::insert(R n){
  lista.insertarcola(n);
}

template<typename R>
R Queue<R>::pop()
{
  return lista.pop;
}

template <typename R>
ostream &Queue<R>::print(ostream &os)
{
  return lista.print(os);
}
#endif
