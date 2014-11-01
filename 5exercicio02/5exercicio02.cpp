/*
 * 5exercicio02.cpp
 *
 *  Created on: 14/06/2012
 *      Author: casa
 */

#include<string>
#include<stdio.h>


int main()
{
	char f[80];
    int b=0,la=0,i;


    printf("Escreva a frase:");
    gets(f);

    for(i=0;i<80;i++)
    {

       if(f[i]=='a' || f[i]=='A')
       {
    	   la++;
       }
       else
       {
    	  if(f[i]==' ')
    	   {
    		   b++;
    	   }
       }
    }

    printf("\nQtd letra A:%d",la);
    printf("\nQtd de brancos:%d",b);


  }








