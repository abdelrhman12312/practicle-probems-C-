/* Write a C function to check if the input is an even number or an odd
number, if even number return 0 if odd number return 1.
Example:
Input 7, Output = 1 (Odd)
Input 6, Output = 0 (Even)*/

#include<stdio.h>


char OddOrEven(int number );

int main() { 
    int number;
    scanf("%d" , &number); 
    printf("%d" , OddOrEven(number));
    }
char OddOrEven(int number ) {
        
        if(number%2==0)
            return 0 ; 
        else if (number%2 != 0)
            return 1  ;     
}
