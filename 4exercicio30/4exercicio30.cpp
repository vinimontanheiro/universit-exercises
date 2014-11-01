#include<stdio.h>
#include<math.h>
int main()
{
    float a;

    for(a=0.1;a<=6.3;)
    {
        a=a-((pow(a,3)/6)+(pow(a,5)/120)-(pow(a,7)/5040));

        printf("\nValores %f",a);
    }


}
