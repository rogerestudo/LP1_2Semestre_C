#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos_totais;
    int horas, minutos, segundos;


    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos_totais);


    horas = segundos_totais / 3600;
    minutos = (segundos_totais % 3600) / 60;
    segundos = segundos_totais % 60;


    printf("Tempo correspondente:\n");
    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
