#include <stdio.h>
main ()
{
	int idade;
	printf ("Digite a idade: ");
	scanf ("%d",&idade);
	if (idade>=18) {
		printf("A pessoa e maior de idade \n");
	} if (idade<18) {
		printf("A pessoa e menor de idade \n");
	}
    system("pause");
}

