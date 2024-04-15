#include <stdio.h>

int main() {
   int moedas, cedulas;
   moedas = cedulas = 0;
   float valor;

   printf("Digite o valor total da compra: ");
   scanf("%f", &valor);

   valor = 100 - valor;
   printf("Troco a ser devolvido: %g\n", valor);

   while(valor > 0) {
      if (valor >= 50) {
         cedulas++;
         valor -= 50;
      } else if (valor >= 20) {
         cedulas++;
         valor -= 20;
      } else if (valor >= 10) {
         cedulas++;
         valor -= 10;
      } else if (valor >= 5) {
         cedulas++;
         valor -= 5;
      } else if (valor >= 2) {
         cedulas++;
         valor -= 2;
      } else if (valor >= 1) {
         moedas++;
         valor -= 1;
      } else if (valor >= 0.50) {
         moedas++;
         valor -= 0.50;
      } else if (valor >= 0.25) {
         moedas++;
         valor -= 0.25;
      } else if (valor >= 0.10) {
         moedas++;
         valor -= 0.10;
      } else if (valor >= 0.5) {
         moedas++;
         valor -= 0.5;
      }
   }

   printf("Quantidade minima de cédulas: %d\n", cedulas);
   printf("Quantidade minima de moedas: %d\n", moedas);

   return 0;
}
