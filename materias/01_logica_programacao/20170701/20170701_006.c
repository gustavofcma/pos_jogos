// EXERC�CIO 1 DO SLIDE 11
// Escreva um programa com uma fun��o que calcule a m�dia entre as tr�s notas de um aluno

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

float calcular_media(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

main() {
    int i;
    float nota1, nota2, nota3;

    setlocale(LC_ALL, ""); // Utilizar v�rgula para valores do tipo float

    printf("Digite a 1� nota: ");
    scanf(" %f", &nota1);
    printf("Digite a 2� nota: ");
    scanf(" %f", &nota2);
    printf("Digite a 3� nota: ");
    scanf(" %f", &nota3);

    printf("\nA m�dia das notas � %.2f\n\n", calcular_media(nota1,nota2,nota3));
    system("PAUSE");
}
