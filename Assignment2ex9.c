/* Write a C Function that 
swaps the value of two integer numbers.*/

#include<stdio.h>
int swap(int num1 , int num2);
int main() { 

    int num1 , num2 ; 
    scanf("%d %d", &num1 , &num2);
    int swap1 = 1 , swap2 = 1;
     swap(num1 , num2);
    }

int swap(int num1 , int num2 ) { 
    int temp ;
    temp = num1; 
    num1 = num2;
    num2 = temp;
    printf("%d %d" , num1 , num2 );
    
    
}