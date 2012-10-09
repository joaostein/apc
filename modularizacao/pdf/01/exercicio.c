#include <stdio.h>


float realToDollar(float real) {
  float dolar;

  dolar = real * 0.59;
  return dolar;
}

void dolarToReal(float dolar) {
  float real;

  real = dolar * 1.7;
  printf("\n\t%.2f dólares = %.2f reais.\n\n", dolar, real);
}

int main() {

  int opcao;
  float valor;

  do {
    printf("Menu de opções:\n\n");
    printf("\t1 - Real para Dólar\n");
    printf("\t2 - Dolar para Real\n");
    printf("\t9 - Sair\n");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        printf("\nInforme o valor em reais que deseja converter: ");
        scanf("%f", &valor);
        printf("\n\t%.2f reais = %.2f dólares.\n\n", valor, realToDollar(valor));
        break;
      case 2:
        printf("\nInforme o valor em dólares que deseja converter: ");
        scanf("%f", &valor);
        dolarToReal(valor);
        break;
      case 9:
        break;
      default:
        printf("\nOpção inválida\n\n");
        break;
    }

  } while (opcao != 9);


  system("pause");
}
