#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    char operacao;
    float num1, num2;

    setlocale(LC_ALL, "");

    printf("Entre com o primeiro n�umero: ");
    scanf(" %f",&num1);

    printf("Entre com o segundo n�mero: ");
    scanf(" %f",&num2);

    printf("Escolha sua opera��o [+ - * / ]: ");
    scanf(" %c",&operacao);

    switch(operacao) {
        case '+': printf("\nResultado: %.2f + %.2f = %.2f\n\n", num1, num2, num1 + num2);break;
        case '-': printf("\nResultado: %.2f - %.2f = %.2f\n\n", num1, num2, num1 - num2);break;
        case '*': printf("\nResultado: %.2f * %.2f = %.2f\n\n", num1, num2, num1 * num2);break;
        case '/': printf("\nResultado: %.2f / %.2f = %.2f\n\n", num1, num2, num1 / num2);break;
        default: printf("\nVoc� digitou uma opera��o inv�lida.\n\n");
    }
    system("pause");
}
