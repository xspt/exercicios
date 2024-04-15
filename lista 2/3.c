#include <stdio.h>

/*
 * Crie um programa para ler 3 números do teclado e informar se estes números podem formar
 * um triângulo.
 * Obs: Para formar um triângulo um número não pode ser maior que a soma dos outros dois
*/

int main ()
{
   int a, b, c;

   printf("Digite um valor para o lado A: ");
   scanf("%d", &a);

   printf("Digite um valor para o lado B: ");
   scanf("%d", &b);

   printf("Digite um valor para o lado C: ");
   scanf("%d", &c);

   if (a > b + c || b > a + c || c > a + b)
   {
      printf("Estes números não podem formar um triângulo.\n");
   }
   else
   {
      printf("Estes números podem formar um triângulo.\n");
   }

   return 0;
}
