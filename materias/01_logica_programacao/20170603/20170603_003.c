#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    char letra;

    setlocale(LC_ALL, ""); //define locale igual ao do sistema

    printf("Digite uma letra: ");
    scanf("%c",&letra);

    switch(toupper(letra)) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': printf("\nA letra %c � uma: VOGAL\n\n", toupper(letra));break;
        default: printf("\nA letra %c � uma: CONSOANTE\n\n", toupper(letra));
    }
    system("pause");
}
