//Exercícios sobre métodos - 01

#include<stdio.h>
#include<math.h>

int calcularPotencia(int b, int exp)
{
	int r;
	r = pow(b,exp);
	return r;

};

int main()
{
	int a,b,c;

	printf("\nInforme o valor da base:");
	scanf("%d",&a);

	printf("\nInforme o valor do expoente:");
	scanf("%d",&b);

	c = calcularPotencia(a,b);

	printf("\nResultado:%d",c);

}
