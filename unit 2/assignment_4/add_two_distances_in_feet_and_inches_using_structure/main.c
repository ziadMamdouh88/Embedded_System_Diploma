/******************************************************************************

                           ziad mamdouh
                           30/12/2022

*******************************************************************************/

#include <stdio.h>
struct distance{
    int feet;
    float inch;
    

}d1,d2,result;
int main()

{ 
    printf("enter first distance\n");
printf("enter feet: ");
scanf("%d",&d1.feet);
printf("\nenter inch: ");
scanf("%f",&d1.inch);
printf("\nenter second distance: ");
printf("\nenter feet:");
scanf("%d",&d2.feet);
printf("\nenter inch:");
scanf("%f",&d2.inch);

result.feet = d1.feet + d2.feet;
result.inch = d1.inch + d2.inch;


   while (result.inch >= 12.0) {
      result.inch = result.inch - 12.0;
      ++result.feet;
   }
   printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
   return 0;


    
    

    return 0;
}