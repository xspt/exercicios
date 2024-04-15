#include <stdio.h>

int main() {
   int num;

   printf("Digite um número: ");
   scanf("%d", &num);

   for (int i = 1; i <= num; i++) {
      printf("%d ", i);
   }
   printf("\n");

   for (int i = num; i > 0; i--) {
      printf("%d ", i);
   }
   printf("\n");

   return 0;
}
