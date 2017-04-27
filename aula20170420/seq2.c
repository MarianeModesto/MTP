#include <stdio.h>
void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main () {
    float base,altura,  area;
    printf("Entre com a base do paralelogramo");
    scanf("%f",&base);
    safeFlush();
    printf("digite o valor da altura");
    scanf("%f", &altura);
    safeFlush();
    area=base*altura;
    printf("A area do paralelogramo e %g", area);

    return 0;
}
