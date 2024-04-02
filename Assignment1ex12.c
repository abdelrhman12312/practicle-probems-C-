/*Write a program that reads a positive integer and computes 
the factorial. */
#include<stdio.h>

int main() { 
    int factorial=1;
    int number ;
    scanf("%d",&number);
    for(int i =1; i<=number; i++)
        factorial*=i;

    printf("%d" , factorial);
}