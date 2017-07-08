// EXEMPLO DO AVA - SLIDE 7

#include<stdio.h>
#include<stdlib.h>
struct aluno {
  char nome[40];
  float n1,n2, n3;
  }
main()
 {
  struct aluno alunos[5];
  int i;
  float media;
  for (i=0;i<5;i++)
  {
       printf("digite o nome\n");
       fflush(stdin);
       gets(alunos[i].nome);
       printf("digite a primeira nota\n");
       scanf("%f",&alunos[i].n1);
       printf("digite a segunda nota\n");
       scanf("%f",&alunos[i].n2);
      printf("digite a terceira nota\n");
      scanf("%f",&alunos[i].n3);
    }

    for (i=0;i<5;i++)
    {
      printf("%s\n", alunos[i].nome);
      printf("%.2f\n", alunos[i].n1);
      printf("%.2f\n", alunos[i].n2);
      printf("%.2f\n", alunos[i].n3);
      media=(alunos[i].n1+alunos[i].n2+alunos[i].n3)/3;
      printf("Media: %.2f\n", media);
     }
     system("pause");
}
