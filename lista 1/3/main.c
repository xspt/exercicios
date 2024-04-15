#include <stdio.h>

int main() {
   int a, b, temp;

   printf("Digite um número: ");
   scanf("%d", &a);

   printf("Digite outro número: ");
   scanf("%d", &b);

   temp = a;
   a = b;
   b = temp;

   printf("Valor de A: %d; Valor de B: %d\n", a, b);

   return 0;
}
