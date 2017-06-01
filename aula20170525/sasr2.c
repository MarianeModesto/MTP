#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void par(int n){
 int x;
 printf("Numeros pares:\n");
 for (x=0;x<n; x++){
 if(x%2==0)
 printf("%d\n\n",x);}
}
void impar(int n){
int y;
printf("Numeros impares:\n");
for (y=0;y<n; y++){
    if(y%2==1)
    printf("%d\n\n",y);}
}
int main()
{  int n;
    int x;
   printf ("Digite um numero:\n");
   scanf("%d",&n);
par(n);
impar(n);
    return 0;
}
