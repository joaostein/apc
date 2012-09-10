#include <stdio.h>

int main() {
  int numeroPrestacoes;
  float valorMercadoria, valorFinal, valorPrestacao;
  char modoPagamento;

  printf("Informe o valor da mercadoria: ");
  scanf("%f", &valorMercadoria);

  printf("Informe o metodo de pagamento: ");
  scanf("%s", &modoPagamento);

  if ( modoPagamento == 'p' || modoPagamento == 'P' ) {
    printf("Informe o numero de prestacoes: ");
    scanf("%d", &numeroPrestacoes);

    valorFinal = valorMercadoria * 1.1;
    valorPrestacao = valorFinal / numeroPrestacoes;

    printf("\nO valor de cada prestacao sera de R$%f\n\n", valorPrestacao);

  } else if ( modoPagamento == 'v' || modoPagamento == 'V' ) {
    valorFinal = valorMercadoria * 0.95;
    printf("\nO valor total a vista sera de R$%f\n\n", valorFinal);

  } else {
    printf("\nModo de pagamento invalido.\n\n");
  }


  system("pause");
}