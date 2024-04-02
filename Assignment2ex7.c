/* 
 Write a C Function that reads two integers and checks if the first is
multiple of the second.
*/

#include<stdio.h>
void MultipleOrNot(int num1 , int num2);
int main()  {
int number1 , number2 ; 
scanf("%d %d" , &number1 , &number2);
MultipleOrNot(number1 , number2);
}

void MultipleOrNot(int num1 , int num2) {
    if(num2%num1==0)
        printf("they are multiples of each other");
    else
    printf("they are not");    
}