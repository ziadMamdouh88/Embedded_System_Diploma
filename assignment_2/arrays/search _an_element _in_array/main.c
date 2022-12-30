

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
  printf("enter %d element:\n",i);
 scanf("%d",&a[i]);
     
  }
  for(int i=0;i<n;i++){
    
    printf("%d ",a[i]);}
    printf("\n");
 
   printf("enter the element to be searched:");
   scanf("%d",&m);
   
   int j=1;
  
for(int i=0;i<n;i++){
  
   if(a[i]==m){
       printf("number %d in location:%d ",m,i);
       j=0;
   }
   else if(i==n-1&&j)
   printf("not found");
  
     
}
  
    return 0;
}
   
   
       

    
    
    
    
    
