#include <stdio.h>

int main() {
    int i = 1, total = 1, atual, soma;
    const n = 64;

    for ( i; i <= n; i++ ) {

      if ( i == 1 ) {
        atual = 1;
      } else {
        atual = atual * 2;
      }

      soma += atual;

      printf("Soma %d: %d\n\n", i, soma);
      
    }

    system("pause");
}
