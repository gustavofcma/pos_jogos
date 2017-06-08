#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    float minimo, salario, novosalario;
    char nome[20];

    setlocale(LC_ALL, "");

    printf("Valor do salário mínimo: ");
    scanf("%f", &minimo);

    printf("Nome do funcionário: ");
    scanf(" %s", &nome);

    printf("Salário do funcionário: ");
    scanf(" %f", &salario);

    if (salario < (3*minimo)) {
        novosalario = salario * 1.5;
    } else if ((salario >= (3*minimo)) && (salario <= (10*minimo))) {
        novosalario = salario * 1.2;
    } else if ((salario > (10*minimo)) && (salario <= (20*minimo))) {
        novosalario = salario * 1.15;
    } else {
        novosalario = salario * 1.1;
    }

    printf("\n* * * * * RELATÓRIO * * * * *\n\n");
    printf("SALÁRIO MÍNIMO....: R$ %.2f\n\n", minimo);
    printf("Funcionário.......: %s\n", nome);
    printf("Salário base......: R$ %.2f\n", salario);
    printf("Salário reajustado: R$ %.2f\n\n", novosalario);
}
