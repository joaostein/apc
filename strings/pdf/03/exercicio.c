#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char string[50], caractere[3], inteiro[20];
  int posicao;

  printf("Informe uma string: ");
  fgets(string, 50, stdin);

  printf("Informe um caractere: ");
  fgets(caractere, 3, stdin);

  do {
    printf("Informe um inteiro de 1 a %zu, que representa a posiçao da letra: ", strlen(string) - 1);
    fgets(inteiro, 20, stdin);
    posicao = atoi(inteiro) - 1;
  } while (posicao >= strlen(string) - 2 || posicao <= 0);

  string[posicao] = caractere[0];
  puts(string);

}