#define del1 ' '
#define del2 :
#define del3 /
#define delimis (' ' || ':'  || '/')

char ** myTock(char str []);

void freeMem(char ** tokenVec,char str []);

int cmpExt(char str []);


int getNumWords(char str []);

void printVec(char ** tokenVec);
