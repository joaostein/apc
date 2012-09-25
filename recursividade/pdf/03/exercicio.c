#include <stdio.h>

int main() {

  int length, i;

  printf("Informe o tamanho da sequencia: ");
  scanf("%d", &length);

  for ( i = 0; i < length; i++ ) {
    printf( "%d\n", fibonacci(i) );
  }

  system("pause");

}

int fibonacci(int n) {

  if( n < 2 ) {
    return 1;
  } else {
    return fibonacci( n - 2 ) + fibonacci( n - 1 );
  }

}

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144