#include <stdio.h>

int main() {
  int row, col, A[3][4], B[3][4], C[3][4];

  printf("Atribuição de valores da matriz A[3][4]:\n");
  
  for (row = 0; row < 3; row++) {
    for (col = 0; col < 4; col++) {
      printf("\n\tInforme o valor de A[%d][%d]: ", row, col);
      scanf("%d", &A[row][col]);
    }
  }

  printf("\nAtribuição de valores da matriz B[3][4]:\n");
  
  for (row = 0; row < 3; row++) {
    for (col = 0; col < 4; col++) {
      printf("\n\tInforme o valor de B[%d][%d]: ", row, col);
      scanf("%d", &B[row][col]);
    }
  }

  printf("\nSoma de matrizes A[3][4] e B[3][4]:\n");
  for (row = 0; row < 3; row++) {
    for (col = 0; col < 4; col++) {
      C[row][col] = A[row][col] + B[row][col];
      printf("\n\tC[%d][%d] = %d + %d = %d", row, col, A[row][col], B[row][col], C[row][col]);
    }
  }

  system("pause");
}
