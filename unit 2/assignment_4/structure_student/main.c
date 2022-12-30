/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct student{
    char name[100];
    int rol;
    float mark;

};
int main()

{ struct student stud;
    printf("enter information of student\n");
printf("enter name: ");
scanf("%s",stud.name);
printf("\nenter rol: ");
scanf("%d",&stud.rol);
printf("\nenter mark: ");
scanf("%f",&stud.mark);
printf("the information you entered:\n");
printf("name: %s",stud.name);
printf("rol: %d",stud.rol);
printf("name: %s",stud.name);

    
    

    return 0;
}