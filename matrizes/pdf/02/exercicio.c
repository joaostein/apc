#include <stdio.h>

int main() {
  int row, col, A[4][4], soma = 0;

  printf("Atribuição de valores da matriz A[4][4]:\n");
  
  for (col = 0; col < 4; col++) {
    for (row = 0; row < 4; row++) {
      printf("\n\tInforme o valor de A[%d][%d]: ", row, col);
      scanf("%d", &A[row][col]);
    }
  }

  printf("\n Valores acima da diagonal principal: \n");
  for (row = 0; row < 3; row++) {
    for (col = row + 1; col < 4; col++) {
      printf("\n\tA[%d][%d] =  %d\n", row, col, A[row][col]);
      
      soma = soma + A[row][col];
      printf("\n\tSoma =  %d\n", soma);
    }
  }

  system("pause");
}
