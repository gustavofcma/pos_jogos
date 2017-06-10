// EXERCÍCIO DO SLIDE 8

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main() {
    int i, pessoas = 5, mulheres = 0;
    char sexo;
    float idade, soma = 0;

    setlocale(LC_ALL, "");

    printf("-----------------------------------------\n");
    for (i=0; i<pessoas; i++) {
        printf(" Digite a idade da %dª pessoa: ", i+1);
        scanf(" %f",&idade);
        printf(" Informe o sexo da %dª pessoa (M ou F): ", i+1);
        scanf(" %c",&sexo);
        if (toupper(sexo) == 'F') {
            mulheres++;
            soma += idade;
        }
        printf("-----------------------------------------\n");
    }
    printf("\nTotal de mulheres: %d", mulheres);
    printf("\nMédia de idade das mulheres: %.2f\n", soma/mulheres);

}
