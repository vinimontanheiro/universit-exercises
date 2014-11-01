#include<stdio.h>
#include<stdlib.h>

int main()
{
    int vetor[15],tam,i,k,aux,t,r;

    printf("Digite o tamanha do vetor: ");
    scanf("%d",&tam);
    printf("Digite os valores do vetor: ");
    for (i=0;i<tam;i++)
    {
        scanf("%d",&vetor[i]);
    }
    //Ordenando o vetor
    for (k=0;k<=tam-2;k++)
    {
        for (i=0;i<=tam-2;i++)
        {
            if (vetor[i]>vetor[i+1])
            {
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
    //Mostrando o vetor ordenado
    printf("Vetor ordenado: ");
    for (i=0;i<tam;i++)
    {
        printf("%d ",vetor[i]);
    }



    t =vetor[0]; // Primeiro valor não entra na varredura
    for (i=1;i<tam;i++) {
        if( vetor[i] == t ){
            r++; // Enquanto tiverem valores iguais em sequencia, incrementa este contador
        }
        else {
            // Se deu valor diferente do anterior, verifica se teve repetições
            if( r>1 )
            {
                printf("O valor %i esta repetido %i vezes\n", t, r);
                r=1;
            }
            // E atualiza este valor de comparação
            t =vetor[i];
        }
    }
    // Fim do loop, mas ainda não testamos se o último valor do vetor é repetido ou não, então...
    if( r>1 )
    {
        printf("O valor %i esta repetido %i vezes\n", t, r);
    }
}




