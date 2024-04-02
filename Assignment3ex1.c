/*
The sum of an array is the sum of its individual elements. For
example, if an array is numbers = {1, 2, 3, 4}, the sum of the array
is 1+2+3+4 = 10.
Function Description: Complete the function summation. The
function must return the integer sum of the numbers array.
int summation(int numbers_size, int* numbers)
*/

#include<stdio.h>
#define SIZE 5 

int TheSumOfArray(int a[] , int size ) { 
    int sum=0 ; 
    for(int i = 0; i<size; i++)
        sum+=a[i];
    return sum ;     
}

int main () { 
    int arra[SIZE];
    for(int i = 0; i<SIZE; i++) { 
    scanf("%d" , &arra[i]);
    }
    printf("%d" , TheSumOfArray(arra , SIZE));
    

    return 0 ; 
}