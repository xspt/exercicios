#include <stdio.h>

/*
 * Escreva um programa para ler um número do teclado e informar todos os números
 * divisíveis por 3 ou por 5 entre 1 e o número digitado
*/

int main ()
{
   int numero;

   printf("Digite um número: ");
   scanf("%d", &numero);

   printf("Todos os números divisíveis por 3 ou 5 entre 1 e %d:\n", numero);

   for (int i = 1; i <= numero; i++)
   {
      if (i % 3 == 0 || i % 5 == 0)
      {
         printf("%d ", i);
      }
   }

   printf("\n");

   return 0;
}
