#include <iostream>
#include "queue.h"
#include "type.h"

using namespace std;

const int cant=10;

int main() {
  RX vect[cant]={1,2,3,4,5,6,7,8,9,10};
  RX vectpar[5];
  RX vectimpar[5];
  auto p=0; 
  auto i=0;
  for(auto x=0; x<10; x++){
    if(vect[x]%2==0){ 
      vectpar[p]=vect[x];
      p++;
    }
    else{
      vectimpar[i]=vect[x];
      i++;
    }
  }
  for(auto x=0;x<5;x++){
    cout<< vectpar[x]<<" ";
  }
  cout<< endl;
  for(auto x=0;x<5;x++){
    cout<< vectimpar[x]<< " ";
  }

  Queue<RX> queue;
  for(auto x=0; x<5;x++){
    queue.insert(vect[x]);
    cout<<queue<<endl;
  }
}