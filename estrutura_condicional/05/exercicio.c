#include <stdio.h>

int main() {
  int dia, mes, ano;

  printf("Informe um numero que represente um dia: ");
  scanf("%d", &dia);

  printf("Informe numero que represente um mes: ");
  scanf("%d", &mes);

  printf("Informe um numero que represente um ano: ");
  scanf("%d", &ano);

  if ( dia <= 0 || dia > 31 || mes <= 0 || mes > 12 || ano <= 0 ) {
    printf("\nData invalida\n\n");
  } else {
    if ( mes == 4 || mes == 6  || mes == 9 || mes == 11 ) {
      if ( dia > 30 ) {
        printf("\nData invalida\n\n");
      } else {
        printf("\nData valida\n\n");
      }
    } else if ( mes == 2 ) {
      if ( dia > 28 ) {
        printf("\nData invalida\n\n");
      } else {
        printf("\nData valida\n\n");
      }
    } else {
      printf("\nData valida\n\n");
    }
  }


  system("pause");
}