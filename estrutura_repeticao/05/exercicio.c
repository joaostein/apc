#include <stdio.h>

int main() {
    int n1, n2, maior, menor, resto = 1;

    printf("Informe n1: ");
    scanf("%d", &n1);

    printf("Informe n2: ");
    scanf("%d", &n2);

    if ( n1 <= 0 || n2 <= 0 ) {
      printf("Nao pode ser menor ou igual a zero\n\n");
    } else {

      if ( n1 > n2 ) {
        maior = n1;
        menor = n2;
      } else {
        maior = n2;
        menor = n1;
      }

      while ( resto ) {
        resto = maior % menor;
        maior = menor;
        menor = resto;
      }

      printf("\nMDC: %d\n\n", maior);


    }


    system("pause");
}
