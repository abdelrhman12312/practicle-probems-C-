/*Write a program that takes three integers, 
and prints out the smallest number. */

#include<stdio.h>

int main() { 
    int num1 , num2 , num3 ; 
    scanf("%d %d %d" , &num1 , &num2 , &num3);

    if( num1<num2 && num1 <num3 )
        printf("the %d is the snallest one " ,num1 );

     else if( num2<num1 && num2 <num3 )
        printf("the %d is the snallest one " ,num2 );
     
     else
        printf("the %d is the snallest one " ,num3 );



return 0 ;
}