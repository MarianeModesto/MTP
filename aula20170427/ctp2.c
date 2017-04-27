#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define NCHAR 256

int main(){
    int i;
    char frase [NCHAR];
    //stdin = buffer do teclado
    printf("Digite uma frase: ");
    fgets(frase,NCHAR,stdin);
    for (i = 0; frase[i] !='\0' ; i++)
    // \0 eh o final da strings
    //    for (i = 0; frase[i] ; i++) booleano
        frase[i]= toupper(frase[i]);
    printf("A frase em maiuscula:\n%s",
           frase);
    //tolower()
    return EXIT_SUCCESS;

}
