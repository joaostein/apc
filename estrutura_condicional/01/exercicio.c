#include <stdio.h>

int main() {
  int base, altura, area;

  printf("Informe a base do triangulo: ");
  scanf("%d", &base);

  printf("Informe a altura do triangulo: ");
  scanf("%d", &altura);

  if (base <= 0 || altura <=0 ) {
    printf("Dados fornecidos nao podem ser negativos ou igual a zero\n");
  } else {
    area = ( base * altura ) / 2;
    printf("A area do triangulo = %d\n\n", area);
  }


  system("pause");
}