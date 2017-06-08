#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
    char sexo;
    int ano, idade;

    setlocale(LC_ALL, "");

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);
    idade = 2017 - ano;

    printf("Digite o sexo: ");
    scanf(" %c", &sexo);

    if (idade==18 && toupper(sexo)=='M') {
        printf("\nServiço militar obrigatório\n\n");
    } else {
        printf("\nIsento do serviço militar\n\n");
    }
    system("pause");
}
