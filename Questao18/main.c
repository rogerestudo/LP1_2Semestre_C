#include <stdio.h>
#include <stdlib.h>

int eh_primo(int numero) {
    // Números menores ou iguais a 1 não são primos
    if (numero <= 1) {
        return 0;
    }

    // Verifica se o número é divisível por algum valor entre 2 e a raiz quadrada de 'numero'
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; // Se for divisível por algum número, não é primo
        }
    }

    return 1; // Se não for divisível por nenhum número, é primo
}

int main() {
    int numero;

    // Solicita ao usuário um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Chama a função para verificar se o número é primo
    if (eh_primo(numero)) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}
