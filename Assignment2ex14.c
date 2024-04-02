/* Write a C Function that calculate the Fibonacci series using recursive
method.
The Fibonacci Series : 0,1,1,2,3,5,8,13,21,…*/

#include<stdio.h>

int Fibonacci(int number );



int main() { 

    int number ; 
    scanf("%d",&number);
    for(int i = 0 ; i <number; i++ )        
        printf("%d  " , Fibonacci(i));

    }

int Fibonacci(int number) { 

    if(number<=1) // base case 
        return 1 ;

    else
        return Fibonacci(number-1) + Fibonacci(number-2);

}