#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    int num;

    setlocale(LC_ALL, "");

    printf ("Digite um n�mero inteiro: ");
    scanf ("%d",&num);
    printf("\nVoc� digitou: ");
    switch (num) {
        case 1: printf("Um\n\n");break;
        case 2: printf("Dois\n\n");break;
        case 3: printf("Tr�s\n\n");break;
        case 4: printf("Quatro\n\n");break;
        case 5: printf("Cinco\n\n");break;
        case 6: printf("Seis\n\n");break;
        case 7: printf("Sete\n\n");break;
        case 8: printf("Oito\n\n");break;
        case 9: printf("Nove\n\n");break;
        case 0: printf("Zero\n\n");break;
        default : printf("N�o Conhe�o\n\n");
    }
    system("pause");
}
