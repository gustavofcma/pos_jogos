// EXEMPLO DO SLIDE

#include <stdio.h>
#include <stdlib.h>
main(){
int numero, cont=0, neg=0;
do{ //Faça
    printf ("\nDigite um numero inteiro: ");
    scanf ("%d", &numero);
    if (numero<0)
       neg++; // dentro do IF
    cont++; // fora do IF
}while (cont<5); //Enquanto cont menor que 5
printf ("\nO numero de valores negativos eh %d\n", neg);
system("pause");
}
