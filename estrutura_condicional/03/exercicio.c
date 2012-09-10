#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c, deltaArguments;
  float delta, x1, x2;

  printf("Informe o coeficiente a: ");
  scanf("%d", &a);

  printf("Informe o coeficiente b: ");
  scanf("%d", &b);

  printf("Informe o coeficiente c: ");
  scanf("%d", &c);

  deltaArguments = (b * b) - (4 * a * c);

  if ( deltaArguments <= 0 ) {
    printf("Não possui raizes reais.\n");
  } else {
    delta = sqrt( deltaArguments );
    
    x1 = ( -b + delta ) / ( 2 * a );
    x2 = ( -b - delta ) / ( 2 * a );
    
    printf("\nx1 = %f\n\nx2 = %f\n\n ", x1, x2);
  }

  system("pause");
}