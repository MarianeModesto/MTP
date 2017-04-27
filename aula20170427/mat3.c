#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    float n,b,resultado;
    printf("Entre com o valor de n: ");
    scanf("%f",&n);
    printf("Entre com o valor de b: ");
    scanf("%f",&b);
    resultado = log10(n)/log10(b);
    printf("Log de n na base b e: %g\n", resultado);
    return EXIT_SUCCESS;
}
