/*The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called
Fibonacci numbers; each is the sum of the preceding 2. Write a
program which given n, returns the nth Fibonacci number.
- with for/while
- with recursion*/

#include<stdio.h>

int Fibonacci(int n ) { 
    if(n==1 || n==0)
        return 1 ;
    else return Fibonacci(n-1)+Fibonacci(n-2);

}
int Fibonacci2( int n)  {
    int sum = 0  ; 
    for(int i =0; i<n; i++)
        sum+=i;
    return sum ;    
}

int main() { 
    int n = 5 ; 
    printf("%d\n" , Fibonacci(5));
    printf("%d" , Fibonacci2(5));
}