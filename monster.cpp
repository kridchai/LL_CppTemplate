#include <iostream>
#include "monster.h"
using namespace std;
Godzilla::Godzilla(int h,int p ,string n){
      hp=h;
      potion = p;
      name = n;
      next=NULL;
      cout<<"adding "<<name<<endl;
      cout<<"adding "<<hp<<endl;
      cout<<"adding "<<potion<<endl;
}
Godzilla:: ~Godzilla(){
      cout<<"Godzilla "<<name<<" "<<potion<<" "<<hp<<" is being deleted"<<endl; 
}
Godzilla* Godzilla::move_next(){
      return next;
}
void  Godzilla::show_Godzilla(){
         cout<<"name is"<<name<<"hp is:"<<hp<<"potion is"<<potion<<endl;
 }
void Godzilla::insert(Godzilla*& x){
     x->next=this;
     }