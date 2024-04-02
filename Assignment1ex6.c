/*Write a program that print the relation between two integer 
number if those numbers are equal, not equal and which one contain 
the higher value. */


#include<stdio.h>

int main() { 
    int num1 , num2 ; 
    scanf("%d %d" , &num1 , &num2);
    
    if(num1 == num2)
        printf("the two numbers are equals ");
    
    else if(num1 < num2)
    printf("not equals the second number is higher ");
    
    else 
    printf("not equals the first number is higher ");   

}