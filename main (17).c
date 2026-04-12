/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int a;
    printf("enter the value of a:");
    
    scanf("%d%d",&a);
    
    if (a>1&&a<100)
    {
        
    printf("within range");
    }
    else
    {
        printf("without range");
    }
    return 0;
}
    