#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sorteio(int numero){
    int x;
x = rand () %10 +1;
printf("resultado: %d\n", x);
if(x == numero)
{
    printf("Parabens!\n");
}
}

int main(){
    srand(time(NULL));
int numero;
printf("Digite 0 para sair\n\n");
do{
    printf("Digite um numero entre 1 e 10:\n");
scanf("%d",&numero);
sorteio(numero);
}while (numero!=0);


return 0;
}
