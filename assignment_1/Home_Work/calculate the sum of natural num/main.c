

                           /*
 * main.c
 *
 *  Created on: Nov 26, 2022
 *      Author: ziad mamdouh
 */


#include <stdio.h>

int main()
{
    int x, sum=0;
    printf("Enter a number: ");
    scanf("%d",&x);

    for(int i=1;i<=x;i++){
        sum = sum+i;
    }
    printf("sum : %d",sum);
    return 0;
}
   
   
       

    
    
    
    
    
