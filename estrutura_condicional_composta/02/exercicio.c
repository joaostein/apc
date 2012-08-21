#include <stdio.h>

int main() {
    int tempo_trabalho;
    float salario, bonus;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    printf("Informe o tempo (em anos) de trabalho: ");
    scanf("%d", &tempo_trabalho);

    if ( tempo_trabalho >= 5 ) {
      bonus = salario * 0.2;
      printf("\nO bonus sera de: %f\n\n", bonus);
    } else {
      bonus = salario * 0.1;
      printf("\nO bonus sera de: %f\n\n", bonus);
    }

    system("pause");
}