#include <stdio.h>

int main() {
  float altura, peso, pesoIdeal;

  printf("Informe a altura: ");
  scanf("%f", &altura);

  printf("Informe o peso: ");
  scanf("%f", &peso);

  pesoIdeal = ( 72.7 * altura ) - 58;

  printf("\nPeso Ideal: %f\n", pesoIdeal);

  if ( peso == pesoIdeal ) {
    printf("Voce esta com o peso ideal\n\n");
  } else if ( peso > pesoIdeal ) {
    printf("Voce esta com o peso acima do ideal\n\n");
  } else {
    printf("Voce esta com o peso abaixo do ideal\n\n");
  }

  system("pause");
}