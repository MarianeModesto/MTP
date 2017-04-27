
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    float A,B,C,a;
    printf("Entre com a coord B: ");
    scanf("%f",&B);
    printf("Entre com a coord C: ");
    scanf("%f",&C);
    printf("Entre com o angulo em radianos: ");
    scanf("%f",&a);
    A = sqrt(pow(C,2)+pow(B,2)-(2*B*C*cos(a)));
    printf("O lado A e: %g\n", A);
    return EXIT_SUCCESS;
}
