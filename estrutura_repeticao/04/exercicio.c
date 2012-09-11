#include <stdio.h>

int main() {

    int i = 1050, parada = 2400;

    for ( i; i <= 2400; i++ ) {
      
      if ( i % 4 == 0 ) {
        printf("%d\n", i);
      }

    }

    system("pause");
}
