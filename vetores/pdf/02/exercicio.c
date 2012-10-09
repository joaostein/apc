#include <stdio.h>
#define n 10

int main() {
  int i, A[n], B[n], C[n];

  printf("Atribuição de valores do vetor A[5]:\n");
  
  for (i = 0; i < n; i++) {
    printf("\n\tInforme o valor de A[%d]: ", i);
    scanf("%d", &A[i]);
  }

  printf("\nAtribuição de valores do vetor B[5]:\n");
  
  for (i = 0; i < n; i++) {
    printf("\n\tInforme o valor de B[%d]: ", i);
    scanf("%d", &B[i]);
  }

  for (i = 0; i < n; i++) {
    C[i] = A[i] + B[i];
  }

  printf("\nValores do vetor C[10]:\n");
  for (i = 0; i < n; i++) {
    printf("\n\tC[%d] = %d \n", i, C[i]);
  }

  system("pause");
}
