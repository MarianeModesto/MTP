# include <stdio.h>


int main()
{
   char palavra[50];
   int tamanho;

   printf ("Digite uma palavra para verifcar os caracteres\n\n");
   gets (palavra);

   tamanho = strlen(palavra);

   printf("\nTotal de letras da palavra : %d",tamanho);
   printf("\n\n");

   system ("pause");
   return 0;
}
