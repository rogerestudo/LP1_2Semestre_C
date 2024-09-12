#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    char operador;
    printf("Qual operação voce quer fazer? (+,-,*,/) ");
    scanf("%c",&operador);
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    if(operador == '+'){
        printf("%d + %d = %d",n1,n2,n1+n2);
    }
    if(operador == '-'){
        printf("%d - %d = %d",n1,n2,n1-n2);
    }
    if(operador == '*'){
        printf("%d * %d = %d",n1,n2,n1*n2);
    }
    if(operador == '/'){
        printf("%d / %d = %d",n1,n2,n1/n2);
    }

}
