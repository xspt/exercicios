#include <stdio.h>

int main() {
   int maior, menor, soma, temp;
   soma = 0;

   // Fora do loop porque é necessário inicializar a variavel maior e menor com o valor lido
   printf("Digite um número:\n");
   scanf("%d", &temp);
   maior = menor = temp;
   soma += temp;

   for (int i = 0; i < 3; i++) {
      printf("Digite um número:\n");
      scanf("%d", &temp);
      if (temp > maior) {
         maior = temp;
      } else if (temp < menor) {
         menor = temp;
      }
      soma += temp;
   }

   printf("O maior número digitado foi %d\n", maior);
   printf("O menor número digitado foi %d\n", menor);
   printf("A soma dos números digitados é %d\n", soma);
   printf("A média dos números digitados é %g\n", (soma / 4.0));

   return 0;
}
