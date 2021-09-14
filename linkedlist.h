#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
using namespace std;

template <typename R>

class LinkedList 
{
  class Nodo
  {
    private:
    R       dato;
    Nodo    *siguiente;

    public:
    Nodo (Nodo *Sgte=nullptr): siguiente(Sgte)
    {}
    void setSgte(Nodo *Sgte)  {siguiente=Sgte; }
    Nodo *getSgte()            {return siguiente; }
  };
  private:
  Nodo *cabeza=nullptr;
  Nodo *cola=nullptr;
  tamano  ftamano=0;
  public:
  void insertarfcola(R elemento);
  tamano size() const {return ftamano;}
  bool empty() const  {return size()==0;}

  ostream & print(ostream &os);
  R &operator[](tamano pos);
}; 

template <typename R>
void LinkedList<R>::insertarfcola(R elemento)
{
  Nodo *nuevo= new Nodo(elemento);
  if(cola)
  {
    cola-> setSgte(nuevo);
  }
  cola=nuevo;
  if(!cabeza){
    cabeza=nuevo;
  }
  ftamano++;
}
#endif 