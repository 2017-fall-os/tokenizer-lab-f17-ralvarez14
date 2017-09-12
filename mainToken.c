#include "implementation.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char **argv){
    int out = 0;
    char str [1024];
    
    while(!out){
        write(1,"Please enter string:\n",21);
        write(1,"$ ",2);
        read(0,str,sizeof str);
        out = cmpExt(str);
        if(out == 0){
            char ** tokenVec = myTock(str);
            //write(1,"succes?\n",8);
            printVec(tokenVec);
            freeMem(tokenVec,str);
            write(1,"Memory has been freed\n",21);
            //free(tokenVec);
            //write(1,"Memory has been freed\n",21);
        }
    }
    write(1,"End Of loop",14);
    write(1,"\n",1);
}

