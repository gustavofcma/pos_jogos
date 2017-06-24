// EXEMPLO DO SLIDE

#include <stdio.h>
#include <stdlib.h>
main(){
    int numero, neg=0;
    printf ("\nDigite um numero inteiro: ");
    scanf ("%d", &numero);
          while (numero!=0)
          {
             if (numero<0)
                 neg++; //Equivale a neg=neg+1
             printf ("\nDigite um numero inteiro: ");
             scanf ("%d", &numero);
           }
    printf ("\nO numero de valores negativos eh %d\n", neg);
    system("pause");
}
