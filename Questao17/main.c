#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int primeiro_par, segundo_par;
    int soma, quadrado;

    for (num = 1000; num <= 9999; num++) {

        primeiro_par = num / 100;
        segundo_par = num % 100;

        soma = primeiro_par + segundo_par;

        quadrado = soma * soma;

        if (quadrado == num) {
            printf("%d tem a característica desejada.\n", num);
        }
    }

    return 0;
    }
