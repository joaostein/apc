#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char caractere[3], inteiro[20], string[20];
  int i;

  printf("Informe um caractere: ");
  fgets(caractere, 3, stdin);

  printf("Informe um número inteiro: ");
  fgets(inteiro, 20, stdin);

  for (i = 0; i < atoi(inteiro); i++) {
    string[i] = caractere[0];
  }

  printf("A string final resultante é: %s \n", string);

}