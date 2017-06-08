#include<stdio.h>

main ()
{
	float salario, ajuste;
	char sexo, opcao;
	
	while (toupper(opcao) != 'X') {
		system("CLS");
		printf("Sistema de Calculo de Pagamento\n\n");
		printf("Selecione a opcao: \nN: Novo calculo\nX: Sair\n\nSua opcao > ");
		scanf (" %c",&opcao);
		if (toupper(opcao) == 'N') {
			system("CLS");
			printf ("Informe o salario: ");
			scanf ("%f",&salario);
			printf ("Informe o sexo (M ou F): ");
			scanf (" %c",&sexo);
			if (toupper(sexo) == 'M') {
				ajuste = salario * 1.1;
				printf("\nSalario ajustado: R$ %.2f\n\n", ajuste);
			} else if (toupper(sexo) == 'F') {
				ajuste = salario * 1.2;
				printf("\nSalario ajustado: R$ %.2f\n\n", ajuste);
			} else {
				printf("\nOpcao nao suportada!\n\n");
			}
			system("PAUSE");
		}
	}
}
