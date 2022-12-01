

                           /*
 * main.c
 *
 *  Created on: Nov 26, 2022
 *      Author: ziad mamdouh
 */


#include <stdio.h>

int main()
{
  int n,m,l;
  printf("enter number of elements: ");
  scanf("%d",&n);
  int a[n];
  

  for(int i=0;i<n;i++){
 a[i]=i+1;
      printf("%d",i+1);
       a[i]=i+1;
  }
  printf("\n");
   printf("enter the element to be inserted:");
   scanf("%d",&m);
   
   printf("enter the location:");
   scanf("%d",&l);
   a[l]=m;
for(int i=0;i<n;i++){
    
    printf("%d ",a[i]);
  
     
}
  
    return 0;
}
   
   
       

    
    
    
    
    
