#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    float minimo, salario, novosalario;
    char nome[20];

    setlocale(LC_ALL, "");

    printf("Valor do sal�rio m�nimo: ");
    scanf("%f", &minimo);

    printf("Nome do funcion�rio: ");
    scanf(" %s", &nome);

    printf("Sal�rio do funcion�rio: ");
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

    printf("\n* * * * * RELAT�RIO * * * * *\n\n");
    printf("SAL�RIO M�NIMO....: R$ %.2f\n\n", minimo);
    printf("Funcion�rio.......: %s\n", nome);
    printf("Sal�rio base......: R$ %.2f\n", salario);
    printf("Sal�rio reajustado: R$ %.2f\n\n", novosalario);
}
