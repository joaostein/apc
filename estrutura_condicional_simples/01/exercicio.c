#include <stdio.h>

int main() {
    int numero_1, numero_2, soma;

    printf("Informe o primeiro numero: ");
    scanf("%i", &numero_1);

    printf("Informe o segundo numero: ");
    scanf("%i", &numero_2);

    soma = numero_1 + numero_2;

    if (soma > 10) {
      printf("\n%i + %i = %i\n\n", numero_1, numero_2, soma);
    } else {
      printf("\nSoma menor que 10\n\n");
    }

    system("pause");
}
