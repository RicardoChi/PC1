#include <iostream>
#include "linkedlist.h"
#include "type.h"

using namespace std;
const int cantElem=5;

int main() {
  RX vect[cantElem]={1,5,2,4,3};


LinkedList<RX> lista;
for(auto x=0; x<cantElem; x++){
lista.insertarfcola(vect[x]);
cout << lista <<", "<< endl;
}
}