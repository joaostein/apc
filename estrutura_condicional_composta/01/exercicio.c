#include <stdio.h>
#define PI 3.14159

int main() {

    int raio; 
    float area;

    printf("Informe o valor do raio: ");
    scanf("%d", &raio);

    if ( raio > 0 ) {
      area = PI * raio * raio;
      printf("\nArea = %f\n\n", area);
    } else {
      printf("Raio nao pode ser negativo\n\n");
    }

    system("pause");
}