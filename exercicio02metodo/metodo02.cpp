// Exercícios sobre métodos - 02

#include<stdio.h>

bool multiplos(int x,int y)
{

	if(x%y==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int a,b;
	bool c;

	printf("Informe o primeiro valor:");
	scanf("%d",&a);

	printf("Informe o segundo valor:");
	scanf("%d",&b);

	c = multiplos(a,b);

	if(c==true)
	{
		printf("\nSao multiplos!\n");
	}
	else
	{
		printf("\nNão sao multiplos!\n");
	}
}
