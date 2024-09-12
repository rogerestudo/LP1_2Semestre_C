#include <stdio.h>
#include <stdlib.h>

int soma(int n1, int n2){
    return n1+n2;
}

int subtracao(int n1, int n2){
    return n1-n2;
}

int main()
{
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    printf("A soma = %d\n",soma(n1,n2));
    printf("A subtracao = %d",subtracao(n1,n2));
}
