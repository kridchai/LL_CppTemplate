#include <iostream>
#include<cstdlib>
#include"NODE.h"
#include"LL.h"
#include"Godzilla.h"
using namespace std;
int main(int argc, char *argv[])
{  LL A;
   int i;
   Godzilla *t;

   for(i=1;i<argc;i++) {
                       t=new Godzilla(atoi(argv[i]));
                       A.add_node(t);
                       }
   A.show_all();
    //system("PAUSE");
    return 0;
}
