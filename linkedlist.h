#ifndef __LINKEDLIST_h__
#define __LINKEDLIST_h__

using namespace std;

template <typename R>

class LinkedList 
{
  class Node{
    private:
      R     mdata;
      Node  *mSgte;
    public:
    Node(R data, Node *pSgte=nullptr ):mdata (data), *mSgte(pSgte)
    {};
    R getData()                 {return mdata;}
    R &getDataRef()             {return mdata;}
    void setmSgte(Node *pSgte)  {mSgte=pSgte; }
    Node *getpNext()            {return mSgte;}
  };

  private:
    Node *cabeza=nullptr;
         *cola=nullptr;
    tam_r   tam=0;
  public:
    void insertarcabeza(R elemento);
    void insertarcola (R elemento);
    tam_r size() const {return tam;}
    bool empty() const {return size()==0;}
  ostream & print (ostream &os);
};

template <typename R>
void LinkedList<R>::insertarcabeza(R elemento){
  Node  *pNuevo= new Node(elemento,cabeza);
  cabeza=pNuevo;
  tam++;
}
template <typename R>
void LinkedList<R>::insertarcola(R elemento){
  Node *pNuevo= new Node(elemento, cabeza);
    if(cola)
    {cola->setmSgte(pNuevo);
    }
    cola=pNuevo;
    if(!cabeza){
      cabeza=pNuevo;
    }tam++;
}
template <typename R>
ostream &LinkedList<T>::print(ostream &os){
  Node *pnode= cabeza;
  while(pnode){
    os<<pnode<<getData()<<",";
    pnode= pnode->getpNext();}
    return os;

  }
#endif