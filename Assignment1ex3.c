/*Write a program for converting temperature from 
degrees Celsius to degrees Fahrenheit, 
given the formula:  F = C x  9/5  + 32 */


#include<stdio.h>

int main() { 
    
    int c ; 
    scanf("%d" , &c);
    printf(" the degree in F is %d" ,((c*9/5) + 32) );
}