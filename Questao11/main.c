#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
    char palavras[100];
    char *token;

    printf("Digite as palavras: ");
    fgets(palavras,100,stdin);
    token = strtok(palavras," ");
    while (token != NULL){
        printf("%s\n", token);
        token = strtok(NULL," ");
    }

}
