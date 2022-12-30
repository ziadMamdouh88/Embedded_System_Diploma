

                           /*
 * main.c
 *
 *  Created on: Nov 26, 2022
 *      Author: ziad mamdouh
 */


#include <stdio.h>

int main()
{
  int n,m;
  printf("enter rows and columns o: ");
  scanf("%d %d",&n,&m);
  int a[n][m],b[m][n];
  

  for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
      printf("enter [%d] [%d] element: ",i,j);
      scanf("%d",&a[i][j]);
       b[j][i]=a[i][j];
  }}
   printf("the transpose matrix:");
for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
     printf("%d ",b[i][j]);}
    printf("\n");
}
  
    return 0;
}
   
   
       

    
    
    
    
    
