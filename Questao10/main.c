#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam;

    printf("Digite o tamanho do array: ");
    scanf("%d",&tam);

    double numeros[tam];
    for(int i=0;i<tam;i++){
        printf("Digite o valor: ");
        scanf("%f",&numeros[i]);
    }
    for(int i=0;i<tam;i++){
        printf("%d: %f",i,numeros[i]);
    }

}
