#include <stdio.h>
#include <string.h>

/*
 * Escreva um programa para ler uma palavra do teclado e mostrar se é um palíndromo.
 * Obs: palíndromo, ou capícua, ou cabeça-cauda é uma palavra que é igual tanto da
 * esquerda pra direita como da direita pra esquerda, exemplos: OVO, RADAR, ANA, LUZAZUL,
 * OTTO, SUBINOONIBUS, OTTO AMA ANA E ANA AMA OTTO,
 * SOCORRAMMESUBINOONIBUSEMMARROCOS
*/

int main ()
{
   char frase[256];
   unsigned long tamanho_frase;

   printf("Digite uma frase/palavra: ");
   fgets(frase, sizeof(frase), stdin);

   // strlen retorna a quantidade de caracteres incluindo o caracter de quebra de linha, por isso o -1
   tamanho_frase = strlen(frase) - 1;

   for (int i = 0; i < tamanho_frase; i++)
   {
      // printf("frase[%d] = %c / frase[%lu] = %c\n", i, frase[i], tamanho_frase - i - 1, frase[tamanho_frase - i - 1]);
      if (frase[i] != frase[tamanho_frase - i - 1])
      {
         printf("Não é um palíndromo.\n");
         return 0;
      }
   }

   printf("É um palíndromo.\n");

   return 0;
}
