/* write a program to to count the number of digits in 
a number */

#include<stdio.h>

int main() { 
    int NumofDigits = 0;
    int number ;
    scanf("%d" , &number);

    while (number>0)
    {
        number=number/10;
        NumofDigits++;
    }
     printf("%d" , NumofDigits);

}