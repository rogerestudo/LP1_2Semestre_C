#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gols_apostados_time1, gols_apostados_time2;
    int gols_reais_time1, gols_reais_time2;
    int pontos = 0;

    printf("Digite o placar apostado (time1 time2): ");
    scanf("%d %d", &gols_apostados_time1, &gols_apostados_time2);

    printf("Digite o placar real (time1 time2): ");
    scanf("%d %d", &gols_reais_time1, &gols_reais_time2);

    if ((gols_apostados_time1 > gols_apostados_time2 && gols_reais_time1 > gols_reais_time2) ||
        (gols_apostados_time1 < gols_apostados_time2 && gols_reais_time1 < gols_reais_time2) ||
        (gols_apostados_time1 == gols_apostados_time2 && gols_reais_time1 == gols_reais_time2)) {
        pontos += 10;
    }


    if (gols_apostados_time1 == gols_reais_time1) {
        pontos += 5;
    }
    if (gols_apostados_time2 == gols_reais_time2) {
        pontos += 5;
    }


    printf("O apostador fez %d pontos.\n", pontos);

    return 0;
}
