#include <iostream>
#include "monster.h"
using namespace std;
Godzilla::Godzilla(int h,int p ,string n){
      hp=h;
      atk = p;
      name = n;
      next=NULL;
      cout<<"adding "<<name<<" "<<hp<<" "<<atk<<" "<<endl;
     
}
Godzilla:: ~Godzilla(){
      cout<<"Godzilla "<<name<<" atk "<<atk<<" hp "<<hp<<" is being deleted"<<endl; 
}
Godzilla* Godzilla::move_next(){
      return next;
}
void  Godzilla::show_Godzilla(){
         cout<<"name is "<<name<<" hp is: "<<hp<<" atk is"<<atk<<endl;
 }
void Godzilla::insert(Godzilla*& x){
     x->next=this;
     }
void Godzilla::Sound(){
  cout<<"กว้ากกกกกก"<<endl;
}
bool Godzilla::isDeath(){
  if(hp<=0)
    return true;
  else
    return false;
}
int Godzilla::knowHp(){
  return hp;
}
int Godzilla::knowAtk(){
  return atk;
}
void Godzilla::getHp(int x){
   if(x>=0)
      hp = x;
   else
      hp = 0;
}

void Godzilla::setNext(Godzilla* t){
    next = t;
 }

Godzilla Godzilla::operator-(Godzilla a){
Godzilla n;
n.hp = hp-a.atk;
n.atk = atk;
n.name = name;
return n;
}