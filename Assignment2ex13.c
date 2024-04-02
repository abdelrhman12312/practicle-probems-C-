/* In this challenge write a function to add two floating numbers.
Determine the integer floor of the sum. The floor is the truncated float
value, anything after the decimal point is dropped. For instance
floor(1.1+3.05)=floor(4.15)=4*/

#include<stdio.h>

int floorFn(double num1 , double num2 ); 


int main() { 
    double number1 , number2 ; 

    scanf("%lf%lf" , &number1 , &number2);
    int result = floorFn(number1,number2);
    printf("%d" , result);
    
}

int floorFn(double num1 , double num2) { 
    double sum = num1 + num2 ; 
    return (int)sum; 
}