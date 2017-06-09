#include <stdio.h>
#include <locale.h>

main () {
	//declaração de variáveis
	int idade;
	char sexo;
	
	//instrução para permitir o uso de acentuação
	setlocale(LC_ALL, "");
	
	//solicita e lê o sexo informado pelo usuário
	printf("Informe o sexo (M ou F): ");
	scanf(" %c", &sexo);
	
	if (toupper(sexo) == 'M') {
		printf("Informe a idade: ");
		scanf("%d", &idade);
		if (idade >= 18) {
			printf("\nA pessoa está apta ao serviço militar obrigatório!\n\n");
		} else {
			printf("\nA pessoa nao está apta ao serviço militar obrigatório pois apesar de ser do sexo masculino, possui menos de 18 anos!\n\n");
		}
	} else if (toupper(sexo) == 'F') {
		printf("\nA pessoa não está apta ao serviço militar obrigatório pois é do sexo feminino!\n\n");
	} else {
		printf("\nSexo não suportado!\n\n");
	}
	
    system("PAUSE");
}

