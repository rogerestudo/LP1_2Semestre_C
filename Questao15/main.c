#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas_trabalhadas;
    float valor_hora, salario_semana;

    printf("Digite o número de horas trabalhadas na semana: ");
    scanf("%d", &horas_trabalhadas);

    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valor_hora);

    if (horas_trabalhadas <= 40) {
        salario_semana = horas_trabalhadas * valor_hora;
    } else if (horas_trabalhadas <= 60) {
        int horas_normais = 40;
        int horas_extras_50 = horas_trabalhadas - horas_normais;
        salario_semana = (horas_normais * valor_hora) +
                         (horas_extras_50 * valor_hora * 1.5);
    } else {
        int horas_normais = 40;
        int horas_50 = 20;
        int horas_100 = horas_trabalhadas - 60;
        salario_semana = (horas_normais * valor_hora) +
                         (horas_50 * valor_hora * 1.5) +
                         (horas_100 * valor_hora * 2.0);
    }


    printf("O salário semanal é: R$ %.2f\n", salario_semana);

    return 0;
}
