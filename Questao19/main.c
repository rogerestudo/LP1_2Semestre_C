#include <stdio.h>
#include <stdlib.h>

int situacao_aluno(float media_final, int numero_faltas, int horas_aula) {
    float frequencia = ((float)(horas_aula - numero_faltas) / horas_aula) * 100;

    if (media_final >= 70 && frequencia >= 75) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    float media_final;
    int numero_faltas, horas_aula;
    int aprovado;


    printf("Digite a média final do aluno (0 a 100): ");
    scanf("%f", &media_final);

    printf("Digite o número de faltas do aluno: ");
    scanf("%d", &numero_faltas);

    printf("Digite a quantidade de horas-aula no semestre: ");
    scanf("%d", &horas_aula);


    aprovado = situacao_aluno(media_final, numero_faltas, horas_aula);


    if (aprovado) {
        printf("O aluno foi aprovado.\n");
    } else {
        printf("O aluno não foi aprovado.\n");
    }

    return 0;
}
