#include <stdio.h>

/*
 * Elabore um programa em ler um número do teclado e mostrar seu correspondente
 * em binário.
*/

int main ()
{
   int numero, i;
   char temp[16];
   char binario[16];

   printf("Digite um número: ");
   scanf("%d", &numero);

   for (i = 0; numero > 0; i++, numero /= 2)
   {
      if (numero % 2 == 0)
      {
         temp[i] = '0';
      }
      else
      {
         temp[i] = '1';
      }
   }

   // Fim da string
   temp[i] = '\0';
   binario[i] = '\0';
   i--;

   // Inverte a ordem da string
   for (int j = 0; i >= 0; j++, i--)
   {
      binario[j] = temp[i];
   }

   printf("%s\n", binario);

   return 0;
}
