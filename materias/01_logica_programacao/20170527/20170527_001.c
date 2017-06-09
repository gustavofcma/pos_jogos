#include <stdio.h>
#include <stdlib.h>    

main ( ) {
    int numero;
     printf("Digite um numero\n");
     scanf ("%d",&numero);
     if (numero < 0)
         printf ("numero menor que zero\n\n");
      else if (numero < 10)
          printf ("numero entre 0 e  10\n\n");
           else if (numero < 100)
	       printf ("numero entre 10 e  100\n\n");
	       else
     	             printf ("numero maior ou igual a 100\n\n");
     system("pause");
     }
