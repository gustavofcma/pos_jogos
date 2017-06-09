#include <stdio.h>
#include <stdlib.h>

main () {
	float salario, ajuste;
	char sexo;
	printf ("Informe o salario: ");
	scanf ("%f",&salario);
	printf ("Informe o sexo (M ou F): ");
	scanf (" %c",&sexo);
	if (toupper(sexo) == 'M') {
		ajuste = salario * 1.1;
	} else if (toupper(sexo) == 'F') {
		ajuste = salario * 1.2;
	} else {
		printf("\nOpcao nao suportada!\n\n");
		system("PAUSE");
		exit(0);
	}
	printf("\nSalario ajustado: R$ %.2f\n\n", ajuste);
    system("PAUSE");
}

