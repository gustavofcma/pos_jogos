// EXERCÍCIO DO SLIDE 4
// RECEBER N VALORES E EXIBIR O TOTAL DE NEGATIVOS UTILIZANDO O A ESTRUTURA "DO WHILE"

#include <stdlib.h>
#include <stdio.h>
#include <locale.h> //biblioteca para utilizar a função setlocale que permite utilização de acentos e notação decimal com vírgulas

main() {
    int i = 0, valor, negativos = 0;

    setlocale(LC_ALL, "");

    do {
        i++;
        system("CLS");
        printf("Digite o %dº número: ", i);
        scanf("%d", &valor);
        if (valor < 0) {
            negativos++;
        }
    } while (valor != 0);

    system("CLS");
    printf("O total de valores negativos é %d\n\n", negativos);

    system("PAUSE");
}
