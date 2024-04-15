#include <stdio.h>

/*
 * Elabore um programa para ler um número inteiro do teclado e mostrar a soma dos
 * números contidos entre 0 (zero) e esse número, a soma somente dos números pares e
 * a soma somente dos números ímpares
*/

int main ()
{
   int numero, acumulador, acumulador_par, acumulador_impar;

   printf("Digite um número: ");
   scanf("%d", &numero);

   acumulador = acumulador_par = acumulador_impar = 0;

   if (numero < 0)
   {
      for (int i = 0; i >= numero; i--)
      {
         acumulador += i;
         if (i % 2 == 0)
         {
            acumulador_par += i;
         }
         else
         {
            acumulador_impar += i;
         }
      }
   }
   else
   {
      for (int i = 0; i <= numero; i++)
      {
         acumulador += i;
         if (i % 2 == 0)
         {
            acumulador_par += i;
         }
         else
         {
            acumulador_impar += i;
         }
      }
   }

   printf("Soma dos números de 0 a %d = %d\n", numero, acumulador);
   printf("Soma dos números pares de 0 a %d = %d\n", numero, acumulador_par);
   printf("Soma dos números ìmpares de 0 a %d = %d\n", numero, acumulador_impar);

   return 0;
}
