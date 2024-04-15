#include <stdio.h>

/*
 * Crie um programa que receba um número inteiro positivo n e apresente um quadro de
 * números como o que se segue abaixo. Este é o caso de n = 5 (pode-se limitar o valor em 10).
 * Exemplo (n=5): 1 2 3 4 5
 *                2 3 4 5 6
 *                3 4 5 6 7
 *                4 5 6 7 8
 *                5 6 7 8 9
*/

int main ()
{
   int numero;

   printf("Digite um número: ");
   scanf("%d", &numero);

   for (int i = 0; i < 5; i++)
   {
      for (int j = 4; j >= 0; j--)
      {
         printf("%4d ", numero - j);
      }
      printf("\n");
      numero++;
   }

   return 0;
}
