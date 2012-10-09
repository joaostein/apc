#include <stdio.h>
#define N 3

int main() {
  int row, col, A[N][N], B[N][N], C[N][N], i, resultado;

  printf("Atribuição de valores da matriz A[3][3]:\n");
  
  for (col = 0; col < N; col++) {
    for (row = 0; row < N; row++) {
      printf("\n\tInforme o valor de A[%d][%d]: ", row, col);
      scanf("%d", &A[row][col]);
    }
  }

  printf("\nAtribuição de valores da matriz B[3][3]:\n");
  
  for (col = 0; col < N; col++) {
    for (row = 0; row < N; row++) {
      printf("\n\tInforme o valor de B[%d][%d]: ", row, col);
      scanf("%d", &B[row][col]);
    }
  }

  printf("\nCálculo de valores da matriz C[3][3]:\n");
  
  for (row = 0; row < N; row++) {
    for (col = 0; col < N; col++) {

      resultado = 0;

      for(i = 0; i < N; i++) {
        
        printf("\n\tCálculo de C[%d][%d] = ", row, col);
        printf("A[%d][%d] * B[%d][%d] = ", row, i, i, col);
        printf("%d\n", A[row][i] * B[i][col]);
  
        resultado = resultado + A[row][i] * B[i][col];
      }

      C[row][col] = resultado;
      printf("\n\t\t Resultado final de C[%d][%d] = %d \n", row, col, C[row][col]);
    }
  }



  system("pause");
}
