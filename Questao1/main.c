#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metros;
    float decimetros, centimetros, milimetros;


    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    decimetros = metros * 10.0;
    centimetros = metros * 100.0;
    milimetros = metros * 1000.0;

    printf("Valor em metros: %.2f m\n", metros);
    printf("Valor em decímetros: %.2f dm\n", decimetros);
    printf("Valor em centímetros: %.2f cm\n", centimetros);
    printf("Valor em milímetros: %.2f mm\n", milimetros);

    return 0;

}
