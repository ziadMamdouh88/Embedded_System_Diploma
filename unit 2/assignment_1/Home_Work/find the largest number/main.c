

                           /*
 * main.c
 *
 *  Created on: Nov 26, 2022
 *      Author: ziad mamdouh
 */


#include <stdio.h>

int main()
{ int  x,y,z;

    printf("enter numbers  ");
    scanf("%d %d %d ",&x,&y,&z);
    
    if(x>y){
        if(x>z){
            printf("the largest number : %d ",x);}
        else {
            printf("the largest number : %d",z);
            
        }}
    else if(y>x) {       
        if(y>z){
            printf("the largest number : %d ",y);}
        else{
            printf("the largest number : %d",z);
            
        }
    }
   
   
       

    
    
    
    
    

    return 0;
}
