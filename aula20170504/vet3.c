#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, vetor [10], soma=0, produto =1 ;
    printf("Digite 10 numeros reais:\n");
    for(i=0; i != 10; i++){
        scanf("%d", &vetor [i]);
      soma = soma + vetor [i];
      produto = produto * vetor [i];
    }
    printf("A somatoria e: %d\nA produtoria e: %d", soma, produto);
    return 0;
}
