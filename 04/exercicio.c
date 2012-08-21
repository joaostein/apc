#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    int angulo, seno, coseno, tangente;
    
    printf("Informe o angulo: ");
    scanf("%d", &angulo);
    
    angulo = ( PI * angulo ) / 180;
    seno = sin(angulo);
    coseno = cos(angulo);
    tangente = tan(angulo);
    
    printf("\nSeno: %d\nCoseno: %d\nTangente: %d\n\n", seno, coseno, tangente);
    system("pause");
}
