#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "globals.h"

int getStrSize(char str []){ // returns size of string
    char *tempPtr;
    int strSize = 0;
    for (tempPtr = str; *tempPtr != '\0'; tempPtr++){
    strSize++;
    }
    return strSize;
}

int getTokenSize(char str []){ // returns size of token
    char *tempPtr;
    int strSize = 0;
    for (tempPtr = str; *tempPtr != ' '; tempPtr++){
    strSize++;
    }
    return strSize;
}

char * trim(char * str){   // Ignores space before first letter
  //  int i = 0;              // Retruns a pointer to it.
    // write(1,"test print2: \n",14);
//    char * ptr;// = (char *) malloc (sizeof(char));
     write(1,"test print3: \n",14);
  //  ptr = str;
 //   if(*str == ' '){
        while(*str == ' '){
            str++;
        }
    //    ptr = str;
 //   }
    return str;
}

int getNumWords(char str []){ // Return the number of tokens
    char *tempPtr;            // the string has  
    int size = 0;
    int i = 0;              // Checks the delimiter
    if(str[i] == ' '){  
        while(str[i] == ' '){ 
            i++;
        }
    }
    for(int j = i; str[j] != '\0'; j++){
        if(str[j] == ' ')
            size++;
    }
    return size + 1;
}

int cmpExt(char str []){  // return 1 if token is "exit"
    if(str[0] == 'e' && str[1] == 'x' && 
        str[2] == 'i' && str[3] == 't')
        return 1;
    else{
        return 0;
    }
}

char * cpyToken(char * str2, int tkSize){  //returns the token
    int i = 0;
    char * token = (char *) malloc (sizeof(char)+tkSize);
    for ( i = 0; i < tkSize; i++){
  //      if(str2[i] != ' '){
            token[i] = str2[i];
            //write(1,word,14);
    //    }
    }
    token[i] = '\0'; 
    return token;
}

void printVec(char ** tokenVec){
    for (; *tokenVec; tokenVec++){
        write(1,"Token: ",7);
        write(1,*tokenVec,sizeof(tokenVec)*2);
        write(1,"\n",1);
    }
}

void freeMem(char ** tokenVec,char str []){ //frees tkvec more on Readme
    char ** temp = tokenVec;
    for(;*tokenVec; tokenVec++){
        // *tokenVec = NULL;
        write(1,"1\n",2);
        free(*tokenVec);
    }
    free(temp);
}

char ** myTock(char str []){
    //char * str2 = trim(str);
    int i;
    int numWords = getNumWords(str);
    
    write(1,"test print: \n",13);
    char ** tokenVec = (char **)calloc(numWords+1, sizeof(char *));
    
    for(i = 0; i < numWords; i++){
        char * str2 = trim(str);
        int tkSize = getTokenSize(str2);
//        tokenVec[i] = (char *)malloc(tkSize+1);
        tokenVec[i] = cpyToken(str2,tkSize);
        str = str2+tkSize;
        //tokenVec++;
    }
    tokenVec[i] = '\0';  

    return tokenVec;
}
