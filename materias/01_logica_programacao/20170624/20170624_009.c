// EXERC�CIO DO SLIDE 5
// Desenvolva um programa que receba o sal�rio e o sexo de um grupo de pessoas e ao final
// exiba a m�dia dos sal�rios das mulheres e dos homens. (use o do...While)

#include <stdlib.h>
#include <stdio.h>
#include <locale.h> //biblioteca para utilizar a fun��o setlocale que permite utiliza��o de acentos e nota��o decimal com v�rgulas

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
