// EXERC�CIO DO SLIDE 9
// RECEBER IDADE DE N PESSOAS E EXIBIR A MAIS NOVA

#include <stdlib.h>
#include <stdio.h>
#include <locale.h> //biblioteca para utilizar a fun��o setlocale que permite utiliza��o de acentos e nota��o decimal com v�rgulas
#include <limits.h> //biblioteca para utilizar a constante INT_MAX que indica o maior valor poss�vel para um valor int

main() {
    int i = 1, posicao = 0, idade = 1, menor_idade = INT_MAX;

    setlocale(LC_ALL, "");

    while (idade != 0) {
        system("CLS");
        printf("Digite a idade da %d� pessoa: ", i);
        scanf("%d", &idade);
        if (idade < menor_idade && idade != 0) {
            menor_idade = idade;
            posicao = i;
        }
        i++;
    }

    system("CLS");
    printf("-------------------------------------------------------\n");
    printf("RESULTADO: ");

    if (posicao != 0) {
        printf("A %d� pessoa � a mais nova, com %d ano(s)!\n", posicao, menor_idade);
    } else {
        printf("Nenhuma idade foi informada!\n");
    }

    printf("-------------------------------------------------------\n\n");
    system("PAUSE");
}
