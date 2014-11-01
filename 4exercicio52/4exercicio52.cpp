/*
 * 4exercicio52.cpp
 *
 *  Created on: 01/06/2012
 *      Author: casa
 */


#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    int i;
    long double qtd=0;

    for(i=1;i<=63;i++)
    {
        qtd=qtd+pow(2,i);
    }
    cout<<"Quantidade de graos:"<<qtd;

}


