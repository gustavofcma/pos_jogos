// EXERC�CIO DO SLIDE 4
// RECEBER N VALORES E EXIBIR O TOTAL DE NEGATIVOS UTILIZANDO O A ESTRUTURA "DO WHILE"

#include <stdlib.h>
#include <stdio.h>
#include <locale.h> //biblioteca para utilizar a fun��o setlocale que permite utiliza��o de acentos e nota��o decimal com v�rgulas

main() {
    int i = 0, valor, negativos = 0;

    setlocale(LC_ALL, "");

    do {
        i++;
        system("CLS");
        printf("Digite o %d� n�mero: ", i);
        scanf("%d", &valor);
        if (valor < 0) {
            negativos++;
        }
    } while (valor != 0);

    system("CLS");
    printf("O total de valores negativos � %d\n\n", negativos);

    system("PAUSE");
}
