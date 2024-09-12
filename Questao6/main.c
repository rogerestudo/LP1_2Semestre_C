#include <stdio.h>
#include <stdlib.h>
int potencia(int x, int y){
    if(y == 0){     // caso base
        return 1;
    }else{
        return x * potencia(x, y-1);
    }
}

int main()
{
    int x, y;
    printf("Digite a base: ");
    scanf("%d",&x);
    printf("Digite o expoente: ");
    scanf("%d",&y);
    printf("O resultado é: %d",potencia(x,y));

}
