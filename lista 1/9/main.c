#include <stdio.h>

int main() {
   int valor, qntcedulas;
   valor = qntcedulas = 0;

   printf("Digite o valor total da compra: ");
   scanf("%d", &valor);

   valor = 100 - valor;
   
   while(valor > 1) {
      if (valor >= 50) {
         qntcedulas++;
         valor -= 50;
      } else if (valor >= 20) {
         qntcedulas++;
         valor -= 20;
      } else if (valor >= 10) {
         qntcedulas++;
         valor -= 10;
      } else if (valor >= 5) {
         qntcedulas++;
         valor -= 5;
      } else if (valor >= 2) {
         qntcedulas++;
         valor -= 2;
      }
   }

   printf("Quantidade minima de cédulas: %d\n", qntcedulas);

   return 0;
}
