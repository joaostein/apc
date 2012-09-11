#include <stdio.h>

int main() {
    int n, soma = 0, i = 1;

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    for ( i; i <= n; i++) {
        soma += i;
    }

    printf("soma: %d\n", soma);

    system("pause");
}
