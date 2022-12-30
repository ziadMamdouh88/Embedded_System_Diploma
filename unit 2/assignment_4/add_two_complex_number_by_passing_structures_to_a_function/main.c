/******************************************************************************

                           ziad mamdouh
                           30/12/2022

*******************************************************************************/

#include <stdio.h>
typedef struct complex{
    float real;
    float imagine;
    

}complex;

complex add(complex n1, complex n2);
int main()

{ complex n1,n2,result;
    printf("enter first real and imaginary number: ");
scanf("%f %f",&n1.real,&n1.imagine);
 printf("enter first real and imaginary number: ");
scanf("%f %f",&n2.real,&n2.imagine);
result=add(n1,n2);
 printf("Sum = %.1f + %.1fi", result.real, result.imagine);
    return 0;

}

complex add(complex n1,complex n2){
    complex temb;
    temb.real=n1.real+n2.real;
    temb.imagine=n1.imagine+n2.imagine;
    
    return temb;
}