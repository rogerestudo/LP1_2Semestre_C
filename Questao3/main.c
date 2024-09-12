#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    if(n1 < n2){
        printf("%d\n",n1);
        printf("%d\n",n2);
    }else{
        printf("%d\n",n2);
        printf("%d",n1);
    }
    if(n1 == n2){
        printf("Valores iguais");
    }
}
