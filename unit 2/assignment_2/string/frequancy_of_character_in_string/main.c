

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

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);

    return 0;
}
   
   
       

    
    
    
    
    
