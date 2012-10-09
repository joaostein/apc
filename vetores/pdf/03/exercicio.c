#include <stdio.h>
#define n 10

int main() {
  int i, A[n], maior, menor;

  printf("Atribuição de valores do vetor A[5]:\n");
  
  for (i = 0; i < n; i++) {
    printf("\n\tInforme o valor de A[%d]: ", i);
    scanf("%d", &A[i]);
  }

  menor = A[0];

  for (i = 0; i < n; i++) {
    if (A[i] > maior) {
      maior = A[i];
    } else if (A[i] < menor) {
      menor = A[i];
    }
  }

  printf("\nMaior: %d\n", maior);
  printf("\nMenor: %d\n", menor);

  system("pause");
}
