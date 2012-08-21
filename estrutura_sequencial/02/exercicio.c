#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, altura, volume;
    
    printf("Informe o valor do raio da lata: ");
    scanf("%f", &raio);
    
    printf("Informe a altura da lata: ");
    scanf("%f", &altura);
    
    volume = PI * raio * raio * altura;
    
    printf("\nO volume da lata eh %f\n\n", volume);
    
    system("pause");
    
}
