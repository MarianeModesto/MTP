#include <stdio.h>
void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main () {
    int numero;
    printf("Entre com um numero ");
    scanf("%d", & numero);
    if(numero%2 == 0)
        printf("o numero eh par!\n");
    else
        printf("o numero eh impar!\n");
    if(numero%3 ==0)
        printf("E multiplo de 3!\n");
    if(numero%5 ==0)
        printf("E multiplo de 5! \n");
    if(numero%7 ==0)
        printf("E multiplo de 7!\n");


    return 0;
}
