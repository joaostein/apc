#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char string[20], string_inversa[20];
  int i, aux = 0;

  printf("Informe uma string: ");
  fgets(string, 20, stdin);

  for (i = strlen(string) - 1; i >= 0; i--) {
    string_inversa[aux] = string[i];
    aux++;
  }
  
  printf("%s \n", string_inversa);
}