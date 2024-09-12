#include <stdio.h>
#include <stdlib.h>


void binario(int n){
    if(n == 0){
    printf("0");
    }else{
        binario(n/2);
        printf("%d",n % 2);
    }
}
int main()
{
    int decimal;
    printf("Digite um valor decimal: ");
    scanf("%d",&decimal);
    binario(decimal);

}
