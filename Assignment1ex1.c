/*Write a program that take two integers 
from the user and print the results of this 
equation: Result = ((num1 + num2) * 3) – 10 */

#include<stdio.h>

int main() { 
    int num1 , num2; 
    scanf("%d %d" , &num1 , &num2 );
    printf("%d" , ((num1 + num2) * 3) - 10);
}