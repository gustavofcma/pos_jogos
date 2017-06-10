// EXERCÍCIO DO SLIDE 10

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main() {
    int i, idade, pessoas = 5;

    setlocale(LC_ALL, "");

    printf("-----------------------------------------\n");
    for (i=0; i<pessoas; i++) {
        printf(" Digite a idade da %dª pessoa: ", i+1);
        scanf(" %f",&idade);
        if (toupper(sexo) == 'F') {
            mulheres++;
            soma += idade;
        }
        printf("-----------------------------------------\n");
    }
    printf("\nTotal de mulheres: %d", mulheres);
    printf("\nMédia de idade das mulheres: %.2f\n", soma/mulheres);

}
