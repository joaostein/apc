#include <stdio.h>

int main() {
  int n;

  printf("Informe um numero para calcular fatorial: ");
  scanf("%d", &n);

  printf( "n! = %d\n", fatorial(n) );

  system("pause");

}

int fatorial( int n ) {

  if ( n <= 1 ) {
    return 1;
  } else {
    return n * fatorial( n - 1 );
  }

}
