I help Ana lastName to organaize ideas for the tokenizer.

right now the tokenizer only use the delimiter ' '
and does not place the token inside the token vector, this is because then I would get a segmentation fault errors on the tokenizer if I use the following line of code: 

        tokenVec[i] = token;
        
and I was not able to figure out how to avoid the segmantatioin fault error on that line, since tokenVec is a double pointer and token is the char pointer to the token.

*UPDATE*

all bugs where succesfully resolve, exccept, when we have this example of string: "Hello_World_ _" in which _ are spacces then the last blank space would get recognized as another word.

*UPDATE 2* All bugs resolved as of 11/03/2017 barley ulpoding the corrections. on 11/17/2017
