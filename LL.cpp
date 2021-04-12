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

void LL::free_G(Godzilla*& A){
   Godzilla *t = hol,*previous = NULL;
   if(hol==A)
   {
     hol = hol->move_next();
     delete(t);
     size--;
   }
   while(t!=NULL)
   {
     previous = t;
     t = t->move_next();
     if(t==A&&t->move_next()==NULL)
     {
       delete(t);
       size--;
       previous->setNext(NULL);
     }
     if(t==A&&t->move_next()!=NULL)
     {
       Godzilla *f = t->move_next();
       delete(t);
       size--;
       previous->setNext(f);
     }

   }
 }
void LL::atk_All(Godzilla A&)
{
  int sumAtk = 0;
  Godzilla* t = hol;
  for(int i = 0;i<size;i++){
    sumAtk+=t->knowAtk();
    t = t->move_next();
  }
  cout<<"sum atk is"<<sumAtk;
  t = hol;
  for(int i = 0;i<size;i++){
    // *t = *t-A;
    if(t->isDeath())
    {
      cout<<"Report Godzilla Death"<<endl;
      this->free_G(t);
    }
    else
      t->Sound();
    t = t->move_next();
  }
  A.getHp(A.knowHp()-sumAtk);
  cout<<"hp boss is"<<A.knowHp();
  if(A.isDeath())
    cout<<"Congratulation Boss is down";
  else{
    A.Sound();
    cout<<"Godzila is stay alive"<<endl;
  }
  
}
