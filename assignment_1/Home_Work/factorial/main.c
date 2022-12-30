

                           /*
 * main.c
 *
 *  Created on: Nov 26, 2022
 *      Author: ziad mamdouh
 */


#include <stdio.h>

int main()
{
    int x, fact=1;
    printf("Enter a number: ");
    scanf("%d",&x);

    for(int i=1;i<=x;i++){
        fact = fact*i;
    }
    printf("factorial  : %d",fact);
    return 0;
}
   
   
       

    
    
    
    
    
