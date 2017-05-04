#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, vetor [10];
    printf("Digite 10 numeros reais:\n");
    for(i=0; i != 10; i++)
      scanf("%d", &vetor [i]);
    for(i=9; i > -1; i--)
        printf("%d ", vetor [i]);
    return 0;
}
