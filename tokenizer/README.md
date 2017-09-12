I help Ana Garcia to organaize ideas for the tokenizer.

right now the tokenizer only use the delimiter ' ' this is because if I where to use a char variable to tell the delimiter, then the iteration would not recognize the delimiter.

also, inside when myTock is called a second time the from main there is a sysalloc: asertion error on this line:

char ** tokenVec = (char **)calloc(numWords+1, sizeof(char **));

after multiple hours and several friends try to help me with this, I could't figure out what was causing this error.

the tokenizer only works if there is no blank space after the end of the tokens.
