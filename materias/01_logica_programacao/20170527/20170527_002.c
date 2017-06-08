#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	int idade;
	
	setlocale(LC_ALL,"");
	
	printf("Informe a idade da pessoa: ");
	scanf("%d", &idade);
	
	printf("\nFaixa etária: ");
	
	if (idade > 70) {
		printf("IDOSO\n");
	} else if (idade > 21) {
		printf("ADULTO\n");
	} else {
		printf("JOVEM\n");
	}
}
