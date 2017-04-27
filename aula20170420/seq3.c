#include <stdio.h>
void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main () {
    float A,B,C,D,E, MEDIA;
    printf("Digite a nota A ");
    scanf("%f",&A);
    safeFlush();
    printf("Digite a nota B ");
    scanf("%f", &B);
    safeFlush();
    printf("Digite a nota C ");
    scanf("%f", &C);
    safeFlush();
    printf("Digite a nota D ");
    scanf("%f", &D);
    safeFlush();
    printf("Digite a nota E ");
    scanf("%f", &E);
    safeFlush();
    MEDIA=(2*A+2*B+2*C+3*D+5*E)/14;
    printf("a media ponderado e %f", MEDIA);


    return 0;
}
