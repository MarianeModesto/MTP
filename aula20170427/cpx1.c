#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <complex.h>
int main (){
    double complex A,B,Z;
    double rA,rB, iA,iB;
    printf("BFF, entre  com a parte real A: ");
    scanf("%lf", &rA);
    printf("BFF, entre  com a img real A: ");
    scanf("%lf", &iA);
    printf("BFF, entre  com a parte real B: ");
    scanf("%lf", &rB);
    printf("BFF, entre  com a img real B: ");
    scanf("%lf", &iB);
    A = rA + I*iA;
    B = rB + I*iB;
    Z = A + B;
    printf("A soma de %lf + I%lf\n", creal(Z), cimag(Z));
    printf("ou igual a %lf<%lf rad\n", cabs(Z), carg(Z));
    return EXIT_SUCCESS;
}
