// EXERCÍCIO DO SLIDE 9

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int rolar_dado(int faces) {
    srand(time(NULL));
    return 1 + (rand() % faces);
}

main() {
    char opcao;
    int faces=6, resultado;
    setlocale(LC_ALL, "");

    resultado = rolar_dado(faces);
    printf("Valor de um dado d%d: %d\n\n", faces, resultado);

    system("PAUSE");
}
