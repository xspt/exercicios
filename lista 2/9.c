#include <stdio.h>
#include <string.h>

/*
 * Crie um programa para ler uma palavra do teclado e mostrá-la ao contrário.
 * Ex: aula → mostrar: alua, faculdade → edadlucaf, pessoa → aossep.
*/

int main ()
{
   char palavra[256];
   char inverso[256];
   unsigned long tamanho_palavra;

   printf("Digite uma palavra: ");
   fgets(palavra, sizeof(palavra), stdin);

   // strlen retorna a quantidade de caracteres incluindo o caracter de quebra de linha, por isso o -1
   tamanho_palavra = strlen(palavra) - 1;

   for (int i = 0, j = tamanho_palavra - 1; i < tamanho_palavra; i++, j--)
   {
      // printf("i: %d, j: %d\n", i, j);
      inverso[i] = palavra[j];
   }

   // Fim da string
   inverso[tamanho_palavra] = '\0';

   printf("%s\n", inverso);

   return 0;
}
