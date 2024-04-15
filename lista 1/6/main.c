#include <stdio.h>

int main() {
   float produto1, produto2, total;

   printf("Digite o valor do primeiro produto: ");
   scanf("%f", &produto1);

   printf("Digite o valor do segundo produto: ");
   scanf("%f", &produto2);

   total = produto1 + produto2;

   printf("O valor final da compra é de: R$ %g\n", total);

   total -= total * 0.1;

   printf("O valor final da compra aplicando um desconto de 10%% é de: R$ %g\n", total);

   return 0;
}
