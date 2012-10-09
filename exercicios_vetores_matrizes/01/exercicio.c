#include <stdio.h>

#define n 20

int main() {

  float n1[n], n2[n], media[n];
  int i;

  for (i = 0; i < n; i++) {
    printf("\nInforme os dados do aluno %d:\n", i + 1);
    
    printf("\n\tNota 1: ", i);
    scanf("%f", &n1[i]);
    
    printf("\n\tNota 2: ", i);
    scanf("%f", &n2[i]);

  }

  printf("\nMédia dos alunos:\n", i);

  for (i = 0; i < n; i++) {
    media[i] = ((n1[i] * 2) + (n2[i] * 3)) / 5;
    printf("\n\tMédia do aluno %d: %.2f\n", i + 1, media[i]);
  }

  system("pause");
}
