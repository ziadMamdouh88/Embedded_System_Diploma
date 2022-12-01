/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{ int  x,y,z;

    printf("enter two numbers ");
    scanf("%d %d",&x,&y);
    z=x;
    x=y;
    y=z;
    
    printf(" first  number after swaping %d\n",x);
    printf(" second  number after swaping %d",y);
    
    
    

    return 0;
}
