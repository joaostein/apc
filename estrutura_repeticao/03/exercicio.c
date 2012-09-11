#include <stdio.h>
#define n 30


int main() {
    int atual = 1, anterior1 = 1, anterior2 = 0, i = 0;

    for ( i; i < n; i++) {
      if ( i == 0 ) {
        printf("L1: 1\n");
      } else {
        atual = anterior1 + anterior2;
        printf("L%d: %d\n", i + 1, atual);

        anterior2 = anterior1;
        anterior1 = atual;
      }

    }

    system("pause");
}
