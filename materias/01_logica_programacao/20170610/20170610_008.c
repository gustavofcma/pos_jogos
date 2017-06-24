// EXERC�CIO DO SLIDE 10
// RECEBER IDADE DE 5 PESSOAS E EXIBIR A MAIS VELHA E A MAIS NOVA

#include <stdlib.h>
#include <stdio.h>
#include <locale.h> //biblioteca para utilizar a fun��o setlocale que permite utiliza��o de acentos e nota��o decimal com v�rgulas
#include <limits.h> //biblioteca para utilizar a constante INT_MAX que indica o maior valor poss�vel para um valor int

main() {
    int i, idade, maior_idade=-1, menor_idade=INT_MAX, maior_pos, menor_pos, pessoas = 5;

    setlocale(LC_ALL, "");

    printf("-----------------------------------------\n");
    for (i=0; i<pessoas; i++) {
        printf(" Digite a idade da %d� pessoa: ", i+1);
        scanf(" %d",&idade);
        if (idade > maior_idade) {
            maior_idade = idade;
            maior_pos = i+1;
        }
        if (idade < menor_idade) {
            menor_idade = idade;
            menor_pos = i+1;
        }
        printf("-----------------------------------------\n");
    }
    printf("\nA %d� pessoa � a mais nova, com %d anos!", menor_pos, menor_idade);
    printf("\nA %d� pessoa � a mais velha, com %d anos!\n", maior_pos, maior_idade);
    system("PAUSE");
}
