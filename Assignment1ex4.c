/*Write a program that reads the radius of 
a circle and calculates the area and circumference 
then prints the results. */

#include<stdio.h>

int main () { 
    int r ; 
    scanf("%d" , &r);
    printf("the area is %0.2f and the circumferrance is %0.2f" , (3.14*r*r) , (2*r*3.14) );
}