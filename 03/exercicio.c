#include <stdio.h>

int main() {
    float altura, largura, area, potencia;
    
    printf("Informe a altura do comodo: ");
    scanf("%f", &altura);
    
    printf("Informe a largura do comodo: ");
    scanf("%f", &largura);
    
    area = largura * altura;
    potencia = area * 15;
    
    printf("\nA area do comodo eh: %f metros quadrados\n\n", area);
    printf("A potencia necessaria p/ iluminar o comodo eh: %fW\n\n", potencia);
    
    system("pause");
}
