// EXERCÍCIO DO SLIDE 5

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

float le_notas(float vetor_notas[5]) {
    int i;
    for (i=0;i<5;i++) {
        printf("Digite a %dª nota: ", i+1);
        scanf(" %f", &vetor_notas[i]);
    }
    return vetor_notas[5];
}

float calcula_media(float vetor_notas[5]) {
    int i;
    float soma=0;
    for (i=0;i<5;i++) {
        soma += vetor_notas[i];
    }
    return soma/5;
}

int conta_acima_media(float vetor_notas[5], float valor_media) {
    int i, contagem=0;
    for (i=0;i<5;i++) {
        if (vetor_notas[i] > valor_media) {
            contagem++;
        }
    }
    return contagem;
}

main() {
    float notas[5], media;
    int acima_media;

    setlocale(LC_ALL, ""); // utilizar vírgula para valores do tipo float

    notas[5] = le_notas(notas);
    media = calcula_media(notas);
    acima_media = conta_acima_media(notas, media);

    printf("\n##### RESULTADO #####\n\n");
    printf("Média das notas: %.2f\nAlunos acima da média: %d\n\n", media, acima_media);
    system("PAUSE");
}
