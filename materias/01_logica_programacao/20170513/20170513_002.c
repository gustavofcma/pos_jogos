#include <stdio.h>

main() {
	int valor1, valor2;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%d", &valor2);
	printf("\nSoma dos valores: %d", valor1+valor2);
	printf("\nSubtracao dos valores: %d", valor1-valor2);
	printf("\nProduto dos valores: %d", valor1*valor2);
	printf("\nDivisao dos valores: %d\n\n", valor1/valor2);
	
	system("PAUSE");
}
