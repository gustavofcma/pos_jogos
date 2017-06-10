// ARQUIVO COPIADO DO AVA - EXEMPLO DE RESPOSTA DO EXERCÍCIO DO SLIDE 8

#include<stdio.h>
#include<stdlib.h>

main() {
      int cont, idade, contaF=0, somaIdadeF=0;
      char sexo;
      for(cont=0;cont<5;cont++)
      {
          printf("Digite o sexo ");
          scanf(" %c",&sexo);
          printf("Digite a idade ");
          scanf("%d",&idade);
          if (sexo=='f')
          {
           contaF=contaF+1; // ou contaF++
           somaIdadeF=somaIdadeF+idade; // ou somaIdadeF+=idade
           }
      }
      printf("Media da mulheres: %.2f", (float)somaIdadeF/contaF);
      system("pause");
}
