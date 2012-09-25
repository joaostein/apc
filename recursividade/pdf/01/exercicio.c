#include <stdio.h>

int main() {

  int i, n, resultado = 0;
  
  printf("Informe um número: ");
  scanf("%d", &n);

  for (i = n; i >= 1; i-- ) {
    resultado += i;
  }

  printf("Soma total = %d\n", resultado);

  system("pause");
}
