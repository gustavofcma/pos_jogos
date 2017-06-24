// EXEMPLO DO SLIDE

#include<stdio.h>
#include<stdlib.h>

main() {
    int cont=0;
    char nome[10]; //Indica um vetor de char com 10 posições

    printf("Digite o nome ");
    scanf("%s",nome); // scanf não aceita espaço
    while(cont<3) {
        printf("Nome digitado: %s \n", nome);
        cont++;
    }
    system("pause");
}

