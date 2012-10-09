#include <stdio.h>

#define n 5

float mediaTotal(float mediaAlunos[]) {
  int i;
  float soma = 0;

  for (i = 0; i < n; i++) {
    soma = soma + mediaAlunos[i];
  }

  return soma / n;
}

void alunosAbaixo(float mediaAlunos[], float mediaTurma) {
  int i, count = 0;

  for (i = 0; i < n; i++) {
    if (mediaAlunos[i] < mediaTurma) {
      count++;
    }
  }

  printf("\n\tTotal de alunos = %d\n", count);

}

int main() {

  float n1[n], n2[n], media[n], mediaTurma;
  int i;

  for (i = 0; i < n; i++) {
    printf("\nInforme os dados do aluno %d:\n", i + 1);
    
    printf("\n\tNota 1: ", i);
    scanf("%f", &n1[i]);
    
    printf("\n\tNota 2: ", i);
    scanf("%f", &n2[i]);

  }

  printf("\nMédia dos alunos:\n");

  for (i = 0; i < n; i++) {
    media[i] = ((n1[i] * 2) + (n2[i] * 3)) / 5;
    printf("\n\tMédia do aluno %d: %.2f\n", i + 1, media[i]);
  }

  printf("\nMédia da Turma:\n");
  mediaTurma = mediaTotal(media);
  printf("\n\tMédia turma = %.2f\n", mediaTurma);

  printf("\nAlunos com média abaixo da turma:\n");
  alunosAbaixo(media, mediaTurma);

  system("pause");
}
