// ARQUIVO COPIADO DO AVA

#include<stdio.h>
#include<stdlib.h>

main() {
    int cont;
    char nome[10]; //Indica o valor de char com 10 posi��es
    printf("Digite o nome: ");
    scanf("%s",nome); //scanf n�o aceite espa�� e n�o tem &
    for(cont=0;cont<5;cont++) {
            printf("Nome digitado: %s \n",nome);
    }
    system("pause");
}
