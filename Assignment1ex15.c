/*Write a program to calculate the power of 
a number. The number and its power 
are input from user.*/

#include<stdio.h>
#include<math.h>
int main() { 
    double num , pw ; 
    scanf("%lf %lf" , &num , &pw); 
    printf("%0.0lf" , pow(num,pw));
}