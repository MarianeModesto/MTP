#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>
#define N 1000

int main(){
    srand(time(0));
    int vetor[N];
    int n1, i;
    int menor = 1 << 31-1, maior = 0;

    printf("Digite um numero entre 1 e 1000: ");
    scanf("%d", &n1);

    for(i=0; i != n1; i++)
        vetor[i] = (rand()%10 );
    printf("\n");

    for(i=0; i != n1; i++)
    {
        if(vetor[i] < menor)
            menor =  vetor[i];

        if(vetor[i] > maior)
            maior =  vetor[i];

    }
    printf("\n%d, %d", menor, maior);

    return 0;
}
