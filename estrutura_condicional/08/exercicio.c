#include <stdio.h>

int main() {
  int ano;

  printf("Informe o ano: ");
  scanf("%d", &ano);

  if ( ano > 0 ) {

    if ( ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0) ) {
      printf("Ano bissexto\n\n");
    } else {
      printf("Ano nao eh bissexto\n\n");
    }

  } else {
    printf("Ano invalido.\n\n");
  }


  system("pause");
}