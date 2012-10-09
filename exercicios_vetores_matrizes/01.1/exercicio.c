#include <stdio.h>

#define n 20

int main() {

  float v[n][3];
  int row, col;

  for (row = 0; row < n; row++) {
    printf("\nInforme os dados do aluno %d:\n", row + 1);
    for (col = 0; col < 2; col++) {
      printf("\n\tNota %d: ", col + 1);
      scanf("%f", &v[row][col]);
    }
  }

  printf("\nMédia dos alunos:\n");
  for (row = 0; row < n; row++) {
    v[row][2] = ((v[row][0] * 2) + (v[row][1] * 3)) / 5;
    printf("\n\tMédia do aluno %d: %.2f\n", row + 1, v[row][2]);
  }

  system("pause");
}
