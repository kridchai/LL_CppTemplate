#include <iostream>
using namespace std;
#include "monster.h"
#include"LL.h"
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
          //clear all nodes
          Godzilla* t = hol;
          for(int i = 0;i<size;i++){
            t=  hol;
            hol = t->move_next();
            delete(t);
          }
          cout<<"destructor"<<endl;
}

void LL::show_all(){
     Godzilla* t=hol;
     int i;
     for(i=0;i<size;i++){
       t->show_Godzilla();
       t = t->move_next();
     }
}
void LL::add_node(Godzilla *&A){

          hol->insert(A);
          hol=A;

       size++;

 }
