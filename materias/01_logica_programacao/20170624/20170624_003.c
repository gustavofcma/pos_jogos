// EXEMPLO DO SLIDE

#include<stdio.h>
#include<stdlib.h>

main() {
    int cont=0;
    char nome[10]; //Indica um vetor de char com 10 posi��es

    printf("Digite o nome ");
    scanf("%s",nome); // scanf n�o aceita espa�o
    while(cont<3) {
        printf("Nome digitado: %s \n", nome);
        cont++;
    }
    system("pause");
}

