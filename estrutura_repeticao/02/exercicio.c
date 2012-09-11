#include <stdio.h>

int main() {
    int n, soma = 0, i = 1, tmpValue;

    printf("Informe a quantidade de numeros que deseja somar: ");
    scanf("%d", &n);

    for ( i; i <= n; i++ ) {
      printf("Informe o valor do n%d: ", i);
      scanf("%d", &tmpValue);

      soma += tmpValue;
    }
    
    printf("\nsoma: %d\n\n", soma);


    system("pause");
}
