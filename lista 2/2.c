#include <stdio.h>

/*
 * Ler um número inteiro com quatro dígitos e escrever em separado o dígito que representa a
 * milhar, a centena, a dezena e a unidade
*/

int main ()
{
   int numero;

   // Impede o usuário de digitar um número com menos de 4 digitos
   numero = 0;
   while (numero < 1000)
   {
      printf("Digite um número de 4 digitos: ");
      scanf("%d", &numero);
   }

   printf("Milhar: %d\n", numero / 1000);

   numero = numero % 1000;
   printf("Centena: %d\n", numero / 100);

   numero = numero % 100;
   printf("Dezena: %d\n", numero / 10);

   numero = numero % 10;
   printf("Unidade: %d\n", numero);

   return 0;
}
