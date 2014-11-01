/*
 * 4exercicio48.cpp
 *
 *  Created on: 28/06/2012
 *      Author: casa
 */



#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    float r,v;

    for(r=0;r<=20;r=r + 0.5)
    {
        v=(4.0/3)*3.14*pow(r,3);

        cout<<"Volume:"<<v<<"\n";
    }


}

