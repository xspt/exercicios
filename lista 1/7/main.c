#include <stdio.h>

int main() {
   float quilometragem, consumo;
   char carro;

   printf("Digite a quantidade de quilômetros rodados: ");
   scanf("%f", &quilometragem);

   printf("Carro (a) - 14 km/L\n");
   printf("Carro (b) - 11 km/L\n");
   printf("Carro (c) - 9 km/L\n");
   printf("Digite o tipo de carro: ");
   // Espaço em branco é necessário para o scanf ignorar quebra de linha e espaço
   scanf(" %c", &carro);

   if (carro != 'a' && carro != 'b' && carro != 'c') {
      printf("Carro inválido\n");
      return -1;
   }

   switch(carro) {
      case 'a':
         consumo = quilometragem / 14;
         printf("Carro A consumiu %g litros\n", consumo);
         break;
      case 'b':
         consumo = quilometragem / 11;
         printf("Carro B consumiu %g litros\n", consumo);
         break;
      case 'c':
         consumo = quilometragem / 9;
         printf("Carro C consumiu %g litros\n", consumo);
         break;
   }

   return 0;
}
