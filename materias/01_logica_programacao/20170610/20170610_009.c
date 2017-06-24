// EXERCÍCIO DO SLIDE 10
// RECEBER IDADE DE 5 PESSOAS E EXIBIR A MAIS VELHA E A MAIS NOVA
// VERSÃO SIMPLIFICADA

#include <stdlib.h>
#include <stdio.h>

main() {
    int i, idade, maior_idade=-1;

    printf("-----------------------------------------\n");
    for (i=1; i<6; i++) {
        printf(" Digite a idade da %da pessoa: ", i);
        scanf(" %d",&idade);
        if (idade > maior_idade) {
            maior_idade = idade;
        }
        printf("-----------------------------------------\n");
    }
    printf("\nA pessoa mais velha tem %d anos!\n", maior_idade);
    system("pause");
}
