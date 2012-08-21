#include <stdio.h>

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if ( numero % 2 == 0 ) {
        printf("\n%d eh par\n\n", numero);
    } else {
        printf("\nNao eh par\n\n");
    }


    system("pause");
}
