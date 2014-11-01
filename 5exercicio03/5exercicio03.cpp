
#include<stdio.h>

int main()
{

	int i,n,j,ax,registrador=0, contador,a[100], b[100];

	printf("escreva o de N ");
			scanf("%d",&n);

	if(n<=100)
	{


		for(i=0;i<n;i++)
		{
			printf("escreva o vetor A: ");
			scanf("%d",&a[i]);
		}

	    for(i=n-1; i>=0; i--)
	    {
	    	for(j=0; j<i; j++)
	        {
	    		if(a[i]<a[j])
	            {
	    			ax=a[i];
	    			a[i]=a[j];
	                a[j]=ax;
	            }

	        }
	     }

	    contador=1;
	    ax=0;
	    j=a[0];
	    b[n]=0;
	    for(i=1; i<=n; i++)
	    {
	    	if(j==a[i])
	    	{
	    		contador++;
	    	}
	    	else
	    	{
	    		if(contador>1)
	    		{
	    			printf("\nO numero %d se repete %d vez(es).\n", j, contador-1);
	    			b[ax++]=j;
	    			j=a[i];
	    			contador=1;
	    			registrador++;
	    		}
	    		else
	    		{
	    			b[ax++]=j;
	    			j=a[i];
	    			contador=1;
	    		}
	    	}
	    }

	             printf("\n Novo conjunto:\n");
	             for(i=0; i<ax; i++)
	             {
	                 printf("%d ", b[i]);
	             }
	}
	else
	{
		printf("Valor de N superior a 100!");
	}





}