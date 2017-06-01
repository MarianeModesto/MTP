#include<stdio.h>
#include<stdlib.h>

struct Soma {
int numerador, denominador;
};

struct Soma somar (int a, int b, int c, int d){
    struct Soma resposta;
    resposta.numerador = (a*d)+(b*c);
    resposta.denominador = b*d;
    return resposta;
};
int main (){
    struct Soma resposta;
    int num1, num2, den1, den2;
    printf("Entre com o primeiro numerador: ");
    scanf("%d", &num1);
    printf("Entre com o primeiro denominador: ");
    scanf("%d", &den1);
     printf("Entre com o segundo numerador: ");
    scanf("%d", &num2);
    printf("Entre com o segundo denominador: ");
    scanf("%d", &den2);
    resposta = somar(num1,den1, num2, den2);
    printf("Resposta:%d/%d\\n", resposta.numerador, resposta.denominador);
    return EXIT_SUCCESS;
}
