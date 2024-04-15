#include <stdio.h>

int main() {
   int digitados, ultimo;
   float soma, media;
   digitados = soma = media = 0;

   printf("Calculo de média\n");
   printf("O programa irá aceitar números inteiros até que 0 ou um número negativo seja digitado\n");

   while (1) {
      scanf("%d", &ultimo);
      if (ultimo <= 0) {
         break;
      }
      soma += ultimo;
      digitados++;
   }

   media = soma / digitados;

   printf("A soma dos números digitados é: %g\n", soma);
   printf("A média dos números digitados é: %g\n", media);

   return 0;
}
