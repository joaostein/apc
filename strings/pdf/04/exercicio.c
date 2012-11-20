#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char string[50], caractere_1[3], caractere_2[3];
  int i;

  printf("Informe um texto: ");
  fgets(string, 50, stdin);

  printf("Informe um caractere: ");
  fgets(caractere_1, 3, stdin);

  printf("Informe outro caractere: ");
  fgets(caractere_2, 3, stdin);

  for (i = 0; i <= strlen(string) - 1; i++) {
    if (string[i] == caractere_1[0]) {
      string[i] = caractere_2[0];
    }
  }

  puts(string);

}