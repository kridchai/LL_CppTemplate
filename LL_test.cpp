#include <iostream>
#include<cstdlib>
using namespace std;
#include"monster.h"
#include"NODE.h"
#include"LL.h"


int main(int argc, char *argv[])
{  
  LL A;
   int i;
   Godzilla *t,boss(10000,10000,"Dark Vader");

   for(i=1;i<argc;i++) {
                       t=new Godzilla(atoi(argv[i]));
                       A.add_node(t);
                       }
   A.show_all();
   //A.atk_All(boss);
   boss.Sound();
    //system("PAUSE");
    return 0;
}
