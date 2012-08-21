#include <stdio.h>

int main() {
    int horas = 0, minutos = 0, segundos;

    printf("\nInforme a quantidade de segundos: ");
    scanf("%d", &segundos);

    if(segundos >= 60) {
        minutos = segundos / 60;
        segundos = segundos % 60; 
    }

    if(minutos) {
        horas = minutos / 60;
        minutos = minutos % 60; 
    }

    printf("\n%dh %dmin %ds\n\n", horas, minutos, segundos);

    system("pause");
}
