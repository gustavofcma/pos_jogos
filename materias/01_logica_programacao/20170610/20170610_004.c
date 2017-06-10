// ARQUIVO COPIADO DO AVA

#include <stdio.h>
#include <stdlib.h>

main(){
    int numero, cont, neg=0;
    for (cont=0; cont<5; cont++) { //Para cont de 0 até 4, cont=cont+1
        printf ("\nDigite um numero inteiro: ");
        scanf ("%d", &numero);
        if (numero<0) {
            neg++; //Equivale a neg=neg+1
        }
        printf ("\nO numero de valores negativos eh %d\n", neg);
        system("pause");
    }
}
