#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int inverte(unsigned int numero) {
    unsigned int invertido = 0;

    while (numero > 0) {
        invertido = invertido * 10 + (numero % 10);

        numero = numero / 10;
    }

    return invertido;
}
}


