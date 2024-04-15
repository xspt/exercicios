#include <stdio.h>

int main() {
   float preco, desconto, total;

   printf("Digite o preço do produto: ");
   scanf("%f", &preco);

   printf("Digite o percentual de desconto: ");
   scanf("%f", &desconto);

   // Transforma porcentagem para decimal
   desconto *= 0.01;

   total = preco * desconto;

   // Transforma de volta em porcentagem por causa da mensagem
   desconto *= 100;

   printf("O valor do produto com %g%% de desconto é: R$ %g\n", desconto, total);

   return 0;
}
