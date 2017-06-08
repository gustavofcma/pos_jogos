#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    char operacao;
    float num1, num2;

    setlocale(LC_ALL, "");

    printf("Entre com o primeiro núumero: ");
    scanf(" %f",&num1);

    printf("Entre com o segundo número: ");
    scanf(" %f",&num2);

    printf("Escolha sua operação [+ - * / ]: ");
    scanf(" %c",&operacao);

    switch(operacao) {
        case '+': printf("\nResultado: %.2f + %.2f = %.2f\n\n", num1, num2, num1 + num2);break;
        case '-': printf("\nResultado: %.2f - %.2f = %.2f\n\n", num1, num2, num1 - num2);break;
        case '*': printf("\nResultado: %.2f * %.2f = %.2f\n\n", num1, num2, num1 * num2);break;
        case '/': printf("\nResultado: %.2f / %.2f = %.2f\n\n", num1, num2, num1 / num2);break;
        default: printf("\nVocê digitou uma operação inválida.\n\n");
    }
    system("pause");
}
