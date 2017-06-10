// ARQUIVO COPIADO DO AVA

#include <stdio.h>
#include <stdlib.h>

main() {
    float nota, somanota=0;
    int cont;
    for(cont=0;cont<5;cont++) {
        printf("Digite a nota do aluno %d: ", cont+1);
        scanf("%f",&nota);
        somanota=somanota+nota; // ou somanota+=nota;
    }
    printf("\nMedia da turma: %.2f\n\n", somanota/5);
    system("pause");
 }
