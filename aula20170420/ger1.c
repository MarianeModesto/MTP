#include <stdio.h>
int main() {
    int i, numero;
    printf("Digite um  numero: ");
    scanf("%d",&numero);
    for(i = 2; i < numero; i++) {
        if(numero%i == 0) {
            printf("Nao eh primo!\n");
            break;
        }
    }
    if(i == numero) printf(" Eh Primo!\n");
    return 0;
}
