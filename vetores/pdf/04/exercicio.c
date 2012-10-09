#include <stdio.h>
#include <math.h>

#define n 10

int main() {
  int i, j, grau, x[n];
  float a[11], resultado;

  do {
    printf("\nInforme o grau N do polinômio (valores entre 1 e 10): ");
    scanf("%d", &grau);
  } while (grau > 10 || grau < 0);

  printf("\nAtribuiçao dos valores do coeficiente: \n");
  for (i = 0; i <= grau; i++) {
    printf("\n\tInforme o valor do coeficiente a(%d): ", i);
    scanf("%f", &a[i]);
  }

  printf("\nAtribuiçao de 10 valores para x: \n");
  for (i = 0; i < n; i++) {
    printf("\n\tInforme o valor de x[%d]: ", i);
    scanf("%d", &x[i]);
  }

  printf("\nCálculo do valores de P(x): \n");
  
  for (j = 0; j < n; j++) {
    resultado = 0;

    printf("\n\tCálculo de P(%d):\n", x[j]);
    for (i = 0; i <= grau; i++) {
      resultado = resultado + (a[i] * pow(x[j], grau - i));
      printf("\n\t\t%f * pow(%d, %d) = %f", a[i], x[j], grau - i, a[i] * pow(x[j], grau - i));
    }

    printf("\n\n\t\tResultado de P(%d) = %f\n", x[j], resultado);
  }

  system("pause");
}
