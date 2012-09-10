#include <stdio.h>

int main() {
  float n1, n2, media;

  printf("Informa a nota 1: ");
  scanf("%f", &n1);

  printf("Informa a nota 2: ");
  scanf("%f", &n2);

  media = (n1 + n2) / 2;

  if ( media >= 5 ) {
    printf("O aluno obteve media %f e esta aprovado\n\n", media);
  } else {
    printf("O aluno obteve media %f e esta reprovado\n\n", media);
  }

  system("pause");
}