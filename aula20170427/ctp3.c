#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define NCHAR 256

int main(){
    int i, flag=0, total=0;
    char frase [NCHAR];
    //stdin = buffer do teclado
    printf("Digite uma frase: ");
    fgets(frase,NCHAR,stdin);

    for(i=0;frase[i]!='\0';i++) {
	if(!flag && frase[i]!=' ') {
		flag=1;
		total++;
	}
	else if(flag && frase[i]==' ')
		flag=0;
}
printf("O número de palavras é: %d\n",total);

return 0;
}
