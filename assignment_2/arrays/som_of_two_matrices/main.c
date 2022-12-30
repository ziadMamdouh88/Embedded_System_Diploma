

                           /*
 * main.c
 *
 *  Created on: Nov 26, 2022
 *      Author: ziad mamdouh
 */


#include <stdio.h>

int main()
{
  int a[2][2],b[2][2],c[2][2];

  for(int i=0;i<2;i++)
  for(int j=0;j<2;j++){
  {
  printf("enter [%d] [%d] of the first matrix: ",i,j);
  scanf("%d",&a[i][j]);}}
  for(int i=0;i<2;i++){
  for(int j=0;j<2;j++)
  {
  printf("enter [%d] [%d] of the second matrix: ",i,j);
  scanf("%d",&b[i][j]);
      c[i][j]=a[i][j]+b[i][j];}
      
  }
  printf("the sum of  two matrix:");
  for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
      
      printf("%d ",c[i][j]);}
      printf("\n");}
  
    return 0;
}
   
   
       

    
    
    
    
    
