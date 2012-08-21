#include <stdio.h>

int main() {
    float valor_salario_minimo, valor_hora, valor_hora_extra, bonus_hora_extra, salario_familia, salario_mes, salario_bruto, imposto, salario_liquido;
    int horas_trabalhadas, horas_extra_trabalhadas, numero_dependentes;

    printf("\nInforme o valor do salario minimo: ");
    scanf("%f", &valor_salario_minimo);

    printf("\nInforme numero de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);

    printf("\nInforme numero de horas extras trabalhadas: ");
    scanf("%d", &horas_extra_trabalhadas);

    printf("\nInforme o numero de dependentes: ");
    scanf("%d", &numero_dependentes);

    valor_hora = valor_salario_minimo / 10;
    valor_hora_extra = valor_hora * 1.5;
    bonus_hora_extra = valor_hora_extra * horas_extra_trabalhadas;
    salario_familia = ( valor_salario_minimo * 0.05 ) * numero_dependentes;
    salario_mes = horas_trabalhadas * valor_hora;
    salario_bruto = salario_mes + salario_familia + bonus_hora_extra;
    imposto = salario_bruto * 0.1;
    salario_liquido = salario_bruto - imposto;

    printf("\nO valor final do salario sera: %f\n\n", salario_liquido);

    // system("pause");
}
