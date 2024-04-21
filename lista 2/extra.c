#include <stdio.h>

/* Escreva um programa para ler o ano, o mês e o dia de nascimento de uma pessoa e mostrar
 * quantos dias se passaram desde o seu nascimento até o dia atual.
 * Regras: Não se deve usar função. Pode usar, aonde achar necessário, as estruturas de
 * decisão (se-senão / escolha-caso) e as estruturas de repetição (para / enquanto / repita-até).
 */

int main()
{
   int diasVividos = 0;
   int dia, mes, ano;

   // Alterar valores
   int diaAtual = 21;
   int mesAtual = 4;
   int anoAtual = 2024;

   printf("Digite o dia que você nasceu: ");
   scanf("%d", &dia);
   printf("Digite o mês que você nasceu: ");
   scanf("%d", &mes);
   printf("Digite o ano que você nasceu: ");
   scanf("%d", &ano);

   for (int i = ano; i <= anoAtual; i++)
   {
      int qntDias = 365;

      // Ano bissexto
      if (i % 400 == 0 && i % 4 == 0 && i % 100 == 0
            || i % 4 == 0 && i % 100 != 0)
      {
         qntDias = 366;
      }

      if (i == ano)
      {
         diasVividos += (12 - mes) * 30;
      }
      else if (i == anoAtual)
      {
         diasVividos += mesAtual * 30 + diaAtual;
      }
      else
      {
         diasVividos += qntDias;
      }
   }

   printf("%d dias se passaram\n", diasVividos);

   return 0;
}
