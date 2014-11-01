// Exercícios sobre métodos

#include<stdio.h>

void quadradoDeAsteriscos(char a,int l)
{
	   int i,j;

	   for(i=0;i<=l;i++)
	   {
		   for(j=0;j<l;j++)
		   {
			   printf("%c",a);
		   }
	   }


}

int main()
{
	char a='*';
	int lados;

	printf("Informe o valor dos lados:");
	scanf("%d",&lados);

	quadradoDeAsteriscos(a,lados);



}

