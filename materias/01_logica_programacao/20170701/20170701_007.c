/* EXERCÍCIO 2 DO SLIDE 11

Aluno: Gustavo de Almeida - 2017000665

Escreva um programa que calcule as raízes de uma equação do segundo grau o Delta deve ser calculado em uma função

Função raiz: -b +- sqrt(delta) / 2a
Delta: sqr(b) - 4ac

Valores de teste:
 - Delta negativo: a=1 b=2 c=2
 - Delta positivo: a=1 b=-5 c=6

*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

float perguntar_valor(char letra) {
    float valor;
    printf("Digite o valor de %c: ", letra);
    scanf(" %f", &valor);
    return valor;
}

float calcular_delta(float a, float b, float c) {
    return (b*b) - (4*a*c);
}

float calcular_raiz(float a, float b, float c, float delta, int sinal) {
    return (-b + (sinal * sqrt(delta))) / (2*a);
}

main() {
    float a, b, c, delta, x1, x2;

    setlocale(LC_ALL, ""); // utilizar vírgula para valores do tipo float

    a = perguntar_valor('A');
    b = perguntar_valor('B');
    c = perguntar_valor('C');

    delta = calcular_delta(a,b,c);

    if (delta < 0) {
        printf("\nImpossível calcular as raízes!\n\n");
    } else {
        x1 = calcular_raiz(a,b,c,delta,1);
        x2 = calcular_raiz(a,b,c,delta,-1);
        system("CLS");
        printf("RESULTADO:\n\nA = %.2f\nB = %.2f\nC = %.2f\n\nDELTA = %.2f\n\nX1 = %.2f\nX2 = %.2f\n\n",a,b,c,delta,x1,x2);
    }
    system("pause");
}
