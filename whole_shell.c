#include<stdio.h>
#include<stdlib.h>
#include <readline/readline.h>
int main(void){

    char buf[1024];
    char * input;

    while(1)
    {

        input=readline(" > ");

        if(strlen(input)==0){
                strcpy(buf,"\n");
        }
        else
        {
                strcpy(buf,input);
        }

        if(strcmp(input,"exit")==0){
                exit(0);
        }
    }
}
