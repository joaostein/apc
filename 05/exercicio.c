#include <stdio.h>
#include <math.h>

int main() {
    float valor_aplicacao, taxa, rendimento;
    int meses;
    
    printf("Informe o valor constante da aplicacao: ");
    scanf("%f", &valor_aplicacao);
    
    printf("Informe a taxa: ");
    scanf("%f", &taxa);
    
    printf("Informe o numero de meses do rendimento: ");
    scanf("%d", &meses);
    
    float potencia = pow((1 + taxa), meses);
    
    rendimento = valor_aplicacao * ( (potencia - 1) / taxa);
    
    printf("\nO rendimento da aplicaçao sera: %f\n\n", rendimento);
    
    system("pause");
}
