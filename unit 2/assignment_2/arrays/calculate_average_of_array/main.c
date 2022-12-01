

                           /*
 * main.c
 *
 *  Created on: Nov 26, 2022
 *      Author: ziad mamdouh
 */


#include <stdio.h>

int main()
{
  int n,av,sum=0;
  printf("enter number of elements: ");
  scanf("%d",&n);
  int a[n];
  

  for(int i=0;i<n;i++){
      printf("enter %d element: ",i);
      scanf("%d",&a[i]);
      sum=sum+a[i];
      
  }
 av=sum/n;
 printf("the average of the elements: %d ",av);
  
    return 0;
}
   
   
       

    
    
    
    
    
