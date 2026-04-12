/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the value:");
scanf("%d%d%d",&a,&b,&c);
 
 
    
    if (a>b && a>c)
    {
        
    printf("maximum=a");
    }
    else if(b>c)
    {
        printf("maximum=b");
    }
    else
    {
        printf("maximum=c");
    }
    return 0;
}
    