// EXEMPLO DO SLIDE

#include<stdio.h>
#include<stdlib.h>
main()
{
      int cont, idade, contaF=0, somaIdadeF=0;
      char sexo, sair;
      printf("Entrar com novos dados (S/N) ");
      scanf(" %c",&sair);
      while(sair!='n')
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
          printf("Entrar com novos dados (S/N) ");
          scanf(" %c",&sair);
          system("cls"); //Limpa a tela
      }
      printf("Media da mulheres: %.2f\n\n", (float)somaIdadeF/contaF);
      system("pause");
}
