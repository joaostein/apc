#include <stdio.h>

int main() {
  float x, fx;

  printf("Informe o valor de x: ");
  scanf("%f", &x);

  if ( x > 0 && x <= 1 ) {
    fx = 1;
  } else if ( x > 1 && x <= 2 ) {
    fx = 2;
  } else if ( x > 2 && x <= 3 ) {
    fx = x * x;
  } else if ( x > 3 ) {
    fx = x * x * x;
  } else {
    fx = 0;
  }

  if ( fx != 0 ) {
    printf("f(x) = %f\n\n", fx);
  } else {
    printf("Impossivel calcular f(x)\n\n");
  }

  system("pause");
}