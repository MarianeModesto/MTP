#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include <stdlib.h>
#define NCHAR 256

int main(){
    int i;
    char frase[NCHAR],cifra[NCHAR];
    printf("Digite uma frase: ");
    fgets(frase, NCHAR, stdin);
    frase[strlen(frase)-1]='\0';
     for(i=0; i<NCHAR; i++){
        if(isalpha(frase[i])){
            if ((frase[i]>= 65&& frase[i] <78)||(frase[i]>=97&& frase[i]<110))
                cifra[i]= frase[i]+13;
            else
                cifra[i]= frase[i]-13;

            }
            else
                cifra[i] = frase [i];
        }
        printf("\nSua frase em ROT13 e: %s\n",cifra);
        return 0;
        }
