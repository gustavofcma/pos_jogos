#include <stdio.h>
#include <locale.h>

main () {
	//declara��o de vari�veis
	int idade;
	char sexo;
	
	//instru��o para permitir o uso de acentua��o
	setlocale(LC_ALL, "");
	
	//solicita e l� o sexo informado pelo usu�rio
	printf("Informe o sexo (M ou F): ");
	scanf(" %c", &sexo);
	
	if (toupper(sexo) == 'M') {
		printf("Informe a idade: ");
		scanf("%d", &idade);
		if (idade >= 18) {
			printf("\nA pessoa est� apta ao servi�o militar obrigat�rio!\n\n");
		} else {
			printf("\nA pessoa nao est� apta ao servi�o militar obrigat�rio pois apesar de ser do sexo masculino, possui menos de 18 anos!\n\n");
		}
	} else if (toupper(sexo) == 'F') {
		printf("\nA pessoa n�o est� apta ao servi�o militar obrigat�rio pois � do sexo feminino!\n\n");
	} else {
		printf("\nSexo n�o suportado!\n\n");
	}
	
    system("PAUSE");
}

