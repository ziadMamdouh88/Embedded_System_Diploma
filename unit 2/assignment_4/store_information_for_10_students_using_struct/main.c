/******************************************************************************

                           ziad mamdouh
                           30/12/2022

*******************************************************************************/

#include <stdio.h>
struct student{
    char name[100];
    int marks;
    

}student[10];

int main()

{ 
    printf("enter information of student:\n");
    for(int i=0;i<10;i++){
        printf("for rol number %d:\n ",i+1);
        printf("enter name: ");
        scanf("%s",student[i].name);
        printf("enter mark: ");
         scanf("%d",&student[i].marks);
    }
    printf("display information of students:\n");
    for(int i=0;i<10;i++){
        printf("for rol number %d:\n ",i+1);
        printf("name: %s",student[i].name);
         printf("\nmarks: %d\n",student[i].marks);}
        
    return 0;

}

