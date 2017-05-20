#include <stdio.h>

main () {
	float base, altura, area;
	
	printf("Base: ");
	scanf("%f", &base);
	printf("Altura: ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf("\nArea do triangulo: %.2f\n\n", area);
	
	system("PAUSE");
}
