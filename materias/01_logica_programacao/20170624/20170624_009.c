// EXERCÍCIO DO SLIDE 5
// Desenvolva um programa que receba o salário e o sexo de um grupo de pessoas e ao final
// exiba a média dos salários das mulheres e dos homens. (use o do...While)

#include <stdlib.h>
#include <stdio.h>
#include <locale.h> //biblioteca para utilizar a função setlocale que permite utilização de acentos e notação decimal com vírgulas

main() {
    char sexo;
    float salario, salario_homens = 0, salario_mulheres = 0;
    int homens = 0, mulheres = 0;

    setlocale(LC_ALL, "");

    do {
        system("CLS");
        printf("Digite o sexo (M ou F. Para sair digite X): ");
        scanf("%c", &sexo);
        switch(toupper(sexo)) {
            case 'F': mulheres++;
            default: ;
        }
    } while (toupper(sexo) != 'X');
}
