/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float p,r,t,si;
    printf("enter the principal amount:");
    scanf("%f",&p);
    printf("enter the rate of intrest:");
    scanf("%f",&r);
    printf("enter the time:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("\n si=%2f\n",si);
    return 0;
}