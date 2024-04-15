#include <stdio.h>

#define MESATUAL 3
#define ANOATUAL 2024

int main() {
   int idade, mes, ano;
   
   printf("Digite o mês em que você nasceu: ");
   scanf("%d", &mes);

   printf("Digite o ano em que você nasceu: ");
   scanf("%d", &ano);

   if (mes <= MESATUAL) {
      idade = ANOATUAL - ano;
   } else {
      idade = (ANOATUAL - ano) - 1;
   }

   printf("Sua idade é: %d\n", idade);

   return 0;
}
