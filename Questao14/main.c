#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y, Z;

    printf("Digite o valor do lado X: ");
    scanf("%d", &X);
    printf("Digite o valor do lado Y: ");
    scanf("%d", &Y);
    printf("Digite o valor do lado Z: ");
    scanf("%d", &Z);

    if ((X + Y > Z) && (X + Z > Y) && (Y + Z > X)) {
        if (X == Y && Y == Z) {
            printf("Os valores formam um triângulo equilátero.\n");
        } else if (X == Y || X == Z || Y == Z) {
            printf("Os valores formam um triângulo isósceles.\n");
        } else {
            printf("Os valores formam um triângulo escaleno.\n");
        }
    } else {
        printf("Os valores não formam um triângulo.\n");
    }

    return 0;
}
