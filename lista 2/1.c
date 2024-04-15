#include <stdio.h>

/*
 * Escreva um programa para ler o número de eleitores de um município, e também o número
 * de votos válidos, brancos e nulos. Mostrar o percentual de cada voto.
*/

int main ()
{
   int eleitores, votos_validos, votos_brancos, votos_nulos;

   printf("Digite a quantidade de eleitores do município: ");
   scanf("%d", &eleitores);

   printf("Digite a quantidade de votos válidos: ");
   scanf("%d", &votos_validos);

   printf("Digite a quantidade de votos brancos: ");
   scanf("%d", &votos_brancos);

   printf("Digite a quantidade de votos nulos: ");
   scanf("%d", &votos_nulos);

   printf("Porcentagem de votos:\n");
   printf("Válidos: %g%%\n", (votos_validos * 100.0) / (float) eleitores);
   printf("Brancos: %g%%\n", (votos_brancos * 100.0) / (float) eleitores);
   printf("Nulos: %g%%\n", (votos_nulos * 100.0) / (float) eleitores);
   return 0;
}
