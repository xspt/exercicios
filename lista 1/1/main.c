#include <stdio.h>

int main() {
   int a, b, soma;

   printf("Digite um número: ");
   scanf("%d", &a);

   printf("Digite outro número: ");
   scanf("%d", &b);

   soma = a + b;

   printf("A soma dos valores é: %d\n", soma);

   return 0;
}
