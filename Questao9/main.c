#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, numMaior=-1000000000, numMenor=100000000000;
    int contagem = 0;
    while(contagem < 10)
    {
        printf("Digite um numero: ");
        scanf("%d",&num);
        if(num > numMaior){
            numMaior = num;
        }
        if(num < numMenor){
            numMenor = num;
        }



        contagem++;
    }
    printf("Maior numero: %d\n",numMaior);
    printf("Menor numero: %d\n",numMenor);
}
