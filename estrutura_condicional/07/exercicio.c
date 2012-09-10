#include <stdio.h>
#include <math.h>

int main() {
  int l1, l2, l3;

  printf("Informe o lado 1: ");
  scanf("%d", &l1);

  printf("Informe o lado 2: ");
  scanf("%d", &l2);

  printf("Informe o lado 3: ");
  scanf("%d", &l3);

  if ( l1 <= 0 || l2 <= 0 || l3 <= 0 ) {
    printf("Nao forma um triangulo.\n\n");
  } else {
    if ( abs(l2 - l3) < l1 && l1 < ( l2 + l3 ) ) {
      if ( abs(l1 - l3) < l2 && l2 < ( l1 + l3 ) ) {
        if ( abs(l1 - l2) < l3 && l3 < ( l1 + l2 ) ) {

          if ( l1 == l2 && l1 == l3 ) {
            printf("Triangulo equilatero.\n\n");
          } else if ( (l1 == l2 && l1 != l3) || (l1 == l3 && l1 != l2) || (l2 == l3 && l2 != l1) ) {
            printf("Triangulo isosceles.\n\n");
          } else {
            printf("Triangulo escaleno.\n\n");
          }

        } else {
          printf("Nao forma um triangulo.\n\n");
        }
      } else {
        printf("Nao forma um triangulo.\n\n");
      }
    } else {
      printf("Nao forma um triangulo.\n\n");
    }
  }


  system("pause");
}