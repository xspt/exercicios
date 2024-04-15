#include <stdio.h>

/*
 * Desenvolva um programa para pedir uma quantidade de números pelo teclado. O
 * usuário irá digitando os números e terminará quando digitar 0 ou um número negativo.
 * Ao final mostrar a quantidade de números digitados pelo usuário, a soma de todos os
 * números, a média, o maior e o menor.
*/

int main ()
{
   int temp, contador, acumulador, maior, menor;
   contador = acumulador = 0;

   printf("O programa irá terminar quando 0 ou um número negativo for digitado.\n");

   while (1)
   {
      printf("Digite um número: ");
      scanf("%d", &temp);
      
      // Se um número menor que 1 for digitado, pare
      if (temp < 1)
      {
         break;
      }

      // Se for a primeira iteração do loop, maior e menor recebem o valor lido
      if (contador == 0)
      {
         maior = menor = temp;
      }

      if (temp < menor)
      {
         menor = temp;
      } 
      else if (temp > maior)
      {
         maior = temp;
      }

      contador++;
      acumulador += temp;
   }

   printf("Você digitou %d números\n", contador);
   printf("A soma dos números digitados é: %d\n", acumulador);
   printf("A média dos números digitados é: %g\n", acumulador / (float) contador);
   printf("O maior número digitado foi %d\n", maior);
   printf("O menor número digitado foi %d\n", menor);

   return 0;
}
