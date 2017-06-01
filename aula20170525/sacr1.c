#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dado(){
return rand()%6 +1;
}
int jogada(int n){
 int soma = 0, i, d;
 for(i=0;i<n;i++){
    d= dado();
    printf("%d",d);
    soma += dado();}
 printf(" : %d\n", soma);
 return soma;
}

int main(){
    srand(time(NULL));
    int i, s;
    printf("Jogo dos 5 daods\n");
    printf("Tecle 'enter' para comecar\n");
    for(i=0; i<3;i++){
        getchar(); s = jogada (5);
        if(s>=18 && s<= 23){
            printf("Ganhou!!\n"); break;
        }
    } if(i == 3)
    printf("Perdeu!\n");
return 0;
}
