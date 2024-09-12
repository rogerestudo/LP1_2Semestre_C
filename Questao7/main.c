#include <stdio.h>
#include <stdlib.h>


float gastoTotal;

int opcao;
float montante,j;
float taxa = 3.0;
float nparcela;

float potencia(float x, int y){
    if(y == 0){
        return 1;
    }else{
        return x * potencia(x, y-1);
    }
}
float JurosComposto(float valor, float tempo){
    montante = valor * potencia((1+taxa/100),tempo);
    return montante;
}


void vista(){
    printf("O valor a vista: %6.2f",gastoTotal * 0.9);
}
void parcela1(){
    printf("O valor parcelado em 2x de: %6.2f",gastoTotal * 0.5);
}

int main()
{

    printf("Digite os gasto total do cliente: ");
    scanf("%f",&gastoTotal);
    printf("vista(1), 2 parcelas(2), de 3 a 10 com 3 porcento juros(3- *somente para compras acima de 100 reais) ");
    scanf("%d",&opcao);
    switch (opcao){
    case 1: vista();
    break;
    case 2: parcela1();
    break;
    case 3: if(gastoTotal > 100){
            printf("Digite a quantidade de parcelas: " );
            scanf("%f",&nparcela);
            montante = JurosComposto(gastoTotal,nparcela);
            printf("%f",montante);
            break;
    default: printf("Numero invalido");

        }

    }
}
