#include <stdio.h>
#define n 10

int main() {
  int i, A[n], B[n];

  printf("Atribuição de valores do vetor A[10]:\n");
  
  for (i = 0; i < n; i++) {
    printf("\n\tInforme o valor de A[%d]: ", i);
    scanf("%d", &A[i]);
  }

  for (i = 0; i < n; i++) {
    (i % 2 == 0) ? (B[i] = A[i] / 2) : (B[i] = A[i] * 3);
  }

  printf("\nValores do vetor A[10]:\n");
  for (i = 0; i < n; i++) {
    printf("\n\tA[%d] = %d \n", i, A[i]);
  }

  printf("\nValores do vetor B[10]:\n");
  for (i = 0; i < n; i++) {
    printf("\n\tB[%d] = %d \n", i, B[i]);
  }

  system("pause");
}
