

                           /*
 * main.c
 *
 *  Created on: Nov 26, 2022
 *      Author: ziad mamdouh
 */


#include <stdio.h>
#include <string.h>
int main()
{
  
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    gets(str);

    

    for (int i = 0; str[i] != '\0'; ++i) {
        
            ++count;
    }

    printf("the length of string  = %d", count);

    return 0;
}
   
   
       

    
    
    
    
    
